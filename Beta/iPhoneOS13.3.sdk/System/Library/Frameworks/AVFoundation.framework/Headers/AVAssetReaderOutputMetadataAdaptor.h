/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetReaderOutputMetadataAdaptorInternal, AVAssetReaderTrackOutput;

@interface AVAssetReaderOutputMetadataAdaptor : NSObject

{
    AVAssetReaderOutputMetadataAdaptorInternal *_internal;
}

@property (nonatomic, readonly) AVAssetReaderTrackOutput *assetReaderTrackOutput;

+ (id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithAssetReaderTrackOutput:(id)arg1;
- (int)addExtractionForOutput:(id)arg1 figAssetReader:(struct OpaqueFigAssetReader *)arg2 options:(id)arg3 withOutputExtactionID:(int *)arg4;
- (id)nextTimedMetadataGroup;

@end
