/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIScrollView.h>

@class NSObject;

@protocol BlockableScrollViewDelegate;

@interface BlockableScrollView : UIScrollView

{
    _Bool _isResizing;
    NSObject<BlockableScrollViewDelegate> *_blockableDelegate;
}

@property (weak, nonatomic) NSObject<BlockableScrollViewDelegate> *blockableDelegate;
@property (nonatomic) _Bool isResizing;

- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

@end
