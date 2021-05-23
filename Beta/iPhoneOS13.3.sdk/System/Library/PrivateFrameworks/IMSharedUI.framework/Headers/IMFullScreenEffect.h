/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, UIColor;

@interface IMFullScreenEffect : NSObject

{
    _Bool _triggeredByResponseKit;
    id _triggeredByObject;
    NSString *_identifier;
    NSArray *_messageFilters;
    NSURL *_soundEffectFileURL;
    unsigned long long _messageOrientation;
    id _delegate;
}

@property (nonatomic) _Bool triggeredByResponseKit;
@property (weak, nonatomic) id triggeredByObject;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) Class effectViewClass;
@property (nonatomic, readonly) unsigned long long layerCount;
@property (nonatomic, readonly) _Bool effectIsDark;
@property (nonatomic, readonly, getter=isForegroundEffect) _Bool foregroundEffect;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) NSArray *messageFilters;
@property (nonatomic, readonly) NSURL *soundEffectFileURL;
@property (nonatomic, readonly) _Bool shouldDrawOverNavigationBar;
@property (nonatomic, readonly) _Bool soundEffectHasHapticTrack;
@property (nonatomic) unsigned long long messageOrientation;
@property id delegate;

+ (id)_monochromeDimmingFilterWithType:(long long)arg1;
+ (id)bigEmojiFilter;
+ (id)tapBackFilter;
+ (id)stickerFilter;

- (void)prepareSoundEffect;

@end
