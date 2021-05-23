/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _CarTitleView : UIView

{
    _Bool _largeText;
    UIView *_view;
    NSString *_text;
    NSArray *_extraConstraints;
}

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) _Bool largeText;
@property (retain, nonatomic) NSArray *extraConstraints;

- (struct CGSize)intrinsicContentSize;
- (void)_updateText;
- (void)_updateLayout;

@end
