<script lang="ts">
	import PictureEnlarge from "$lib/shared/components/images/PictureEnlarge.svelte";

    export let content: { imgSrc: string; imgId: string; }
</script>

<div class="relative">
    <PictureEnlarge
        imgSrc={content.imgSrc}
        enlargeClass={"w-3 h-3"}
        extraClass={"right-0 top-0"}
    />
    <img class="w-[30vw] sm:w-[10vw]" src={content.imgSrc} alt="" />
</div>