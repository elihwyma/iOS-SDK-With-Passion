/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <ITMLKit/IKTextBadgeAttachment.h>

@class IKColor;

@interface IKTextBadgeAttachment (TVMLKitAdditions)

@property (nonatomic, readonly, getter=tv_isResolving) _Bool tv_resolving;
@property (retain, nonatomic, setter=tv_setCurrentTintColor:) IKColor *tv_currentTintColor;
@property (retain, nonatomic, setter=tv_setHighlightColor:) IKColor *tv_highlightColor;

- (id)tv_imageProxy;
- (void)tv_setResolving:(_Bool)arg1;
- (void)tv_setImage:(id)arg1;
- (void)tv_setImageProxy:(id)arg1;
- (void)tv_resolveWithTextLayoutDirection:(long long)arg1 layoutObserver:(CDUnknownBlockType)arg2;

@end
