/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedMetadataObjectDataInternal, NSArray;

@interface AVCaptureSynchronizedMetadataObjectData : AVCaptureSynchronizedData

{
    AVCaptureSynchronizedMetadataObjectDataInternal *_internal;
}

@property (readonly) NSArray *metadataObjects;

- (void)dealloc;
- (id)_initWithMetadataObjects:(id)arg1;

@end
