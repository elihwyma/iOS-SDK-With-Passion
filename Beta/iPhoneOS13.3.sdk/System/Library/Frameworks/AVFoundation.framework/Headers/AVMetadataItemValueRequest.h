/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMetadataItem, AVMetadataItemValueRequestInternal;

@interface AVMetadataItemValueRequest : NSObject

{
    AVMetadataItemValueRequestInternal *_valueRequest;
}

@property (weak, readonly) AVMetadataItem *metadataItem;

+ (id)metadataItemValueRequestWithMetadataItem:(id)arg1;

- (void)dealloc;
- (id)error;
- (id)value;
- (id)dataType;
- (void)respondWithError:(id)arg1;
- (id)initWithMetadataItem:(id)arg1;
- (void)respondWithValue:(id)arg1 dataType:(id)arg2;
- (void)respondWithValue:(id)arg1;

@end
