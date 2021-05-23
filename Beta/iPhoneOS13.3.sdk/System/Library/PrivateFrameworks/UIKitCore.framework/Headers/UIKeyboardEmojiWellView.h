/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSIndexPath, NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiWellView : UIView

{
    _Bool _selected;
    NSArray *_compositeImageRepresentation;
    UIFont *_labelFont;
    NSString *_stringRepresentation;
    UIColor *_selectionBackgroundColor;
    NSIndexPath *_associatedIndexPath;
    UIView *_wellContentView;
    UIView *_backgroundView;
    struct CGSize _compositeImageSize;
}

@property (retain, nonatomic) UIView *wellContentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) struct CGSize compositeImageSize;
@property (retain, nonatomic) NSArray *compositeImageRepresentation;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) NSString *stringRepresentation;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (retain, nonatomic) UIColor *selectionBackgroundColor;
@property (retain, nonatomic) NSIndexPath *associatedIndexPath;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
