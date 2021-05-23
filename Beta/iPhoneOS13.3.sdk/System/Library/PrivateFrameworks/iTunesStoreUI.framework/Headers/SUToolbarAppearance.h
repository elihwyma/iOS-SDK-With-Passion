/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIColor;

@interface SUToolbarAppearance : NSObject

{
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_shadowImages;
    UIColor *_tintColor;
}

@property (retain, nonatomic) UIColor *tintColor;

+ (id)defaultToolbarAppearance;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)styleToolbar:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)enumerateBackgroundImagesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateShadowImagesUsingBlock:(CDUnknownBlockType)arg1;
- (id)backgroundImageForPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setShadowImage:(id)arg1 forPosition:(long long)arg2;
- (id)shadowImageForPosition:(long long)arg1;

@end
