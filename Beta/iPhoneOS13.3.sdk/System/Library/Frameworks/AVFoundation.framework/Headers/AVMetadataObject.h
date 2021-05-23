/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMetadataObjectInternal, NSString;

@interface AVMetadataObject : NSObject

{
    AVMetadataObjectInternal *_objectInternal;
}

@property (readonly) CDStruct_1b6d18a9 time;
@property (readonly) CDStruct_1b6d18a9 duration;
@property (readonly) struct CGRect bounds;
@property (readonly) NSString *type;

+ (id)derivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;

- (id)init;
- (void)dealloc;
- (id)input;
- (id)originalMetadataObject;
- (id)initWithType:(id)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;

@end
