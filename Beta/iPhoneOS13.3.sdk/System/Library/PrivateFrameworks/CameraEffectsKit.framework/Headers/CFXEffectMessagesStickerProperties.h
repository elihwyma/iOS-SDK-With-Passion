/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface CFXEffectMessagesStickerProperties : NSObject

{
    NSString *_effectID;
    NSURL *_previewUrl;
    NSString *_localizedDescription;
}

@property (nonatomic, readonly) NSString *effectID;
@property (nonatomic, readonly) NSURL *previewUrl;
@property (nonatomic, readonly) NSString *localizedDescription;

- (id)initWithEffectID:(id)arg1 previewUrl:(id)arg2 localizedDescription:(id)arg3;

@end
