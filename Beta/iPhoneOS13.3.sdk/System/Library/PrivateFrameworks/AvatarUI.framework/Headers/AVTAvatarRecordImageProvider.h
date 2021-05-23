/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class _AVTAvatarRecordImageProvider;

@interface AVTAvatarRecordImageProvider : NSObject

{
    _AVTAvatarRecordImageProvider *_backingProvider;
}

@property (nonatomic, readonly) _AVTAvatarRecordImageProvider *backingProvider;

- (id)init;
- (void)imageForRecord:(id)arg1 scope:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)imageForRecord:(id)arg1 scope:(id)arg2;
- (id)initWithBackingProvider:(id)arg1;

@end
