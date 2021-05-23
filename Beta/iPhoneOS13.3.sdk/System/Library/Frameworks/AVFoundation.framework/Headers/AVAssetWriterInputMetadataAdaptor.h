/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriterInput, AVAssetWriterInputMetadataAdaptorInternal;

@interface AVAssetWriterInputMetadataAdaptor : NSObject

{
    AVAssetWriterInputMetadataAdaptorInternal *_internal;
}

@property (nonatomic, readonly) AVAssetWriterInput *assetWriterInput;

+ (void)initialize;
+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithAssetWriterInput:(id)arg1;
- (_Bool)appendTimedMetadataGroup:(id)arg1;

@end
