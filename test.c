import { axios } from "@pipedream/platform"
export default defineComponent({
  props: {
    youtube_data_api_custom_app: {
      type: "app",
      app: "youtube_data_api_custom_app",
    }
  },
  async run({steps, $}) {
    return await axios($, {
      url: `https://www.googleapis.com/oauth2/v1/userinfo`,
      headers: {
        Authorization: `Bearer ${this.youtube_data_api_custom_app.$auth.oauth_access_token}`,
      },
    })
  },
})
