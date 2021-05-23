/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/PHAssetWriter.h>

@class AVAssetExportSession;

__attribute__((visibility("hidden")))
@interface PHVideoAssetWriter : PHAssetWriter

{
    AVAssetExportSession *_exportSession;
}

@property (retain, nonatomic) AVAssetExportSession *exportSession;

- (id)request;
- (id)transfer;
- (unsigned long long)estimatedOutputSizeWithError:(id *)arg1;
- (unsigned long long)_estimatedOutputSizeWithError:(id *)arg1;
- (id)requestWithNetworkAccess:(_Bool)arg1;

@end
