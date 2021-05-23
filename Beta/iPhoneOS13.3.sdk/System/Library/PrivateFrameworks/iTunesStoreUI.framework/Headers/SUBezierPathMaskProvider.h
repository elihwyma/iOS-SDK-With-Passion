/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUMaskProvider.h>

@class UIBezierPath;

@interface SUBezierPathMaskProvider : SUMaskProvider

{
    UIBezierPath *_bezierPath;
}

@property (retain, nonatomic) UIBezierPath *bezierPath;

- (void)dealloc;
- (struct CGPath *)copyPathForMaskWithSize:(struct CGSize)arg1;

@end
