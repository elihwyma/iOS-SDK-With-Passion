/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTClipSequencePlayerRequest.h>

@class NSString;

@interface JTClipCompositionUpdateRequest : JTClipSequencePlayerRequest

{
    NSString *_clipUUID;
}

@property (retain, nonatomic) NSString *clipUUID;

- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 withClip:(id)arg2;

@end
