/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/VEKPipelineStage.h>

@class MiroCloudDownloader, VEKResult;

@interface VEKDownloadStage : VEKPipelineStage

{
    int _downloadPolicy;
    MiroCloudDownloader *_cloudDownloader;
    VEKResult *_stageResults;
}

@property (retain, nonatomic) MiroCloudDownloader *cloudDownloader;
@property (retain, nonatomic) VEKResult *stageResults;
@property int downloadPolicy;

- (id)outputTypes;
- (id)inputTypes;
- (void)_downloadAssets:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldCancelOnNonLocalAssets;
- (void)tellPipelineThatItShouldCancelPlease;
- (id)runStageWithInput:(id)arg1;

@end
