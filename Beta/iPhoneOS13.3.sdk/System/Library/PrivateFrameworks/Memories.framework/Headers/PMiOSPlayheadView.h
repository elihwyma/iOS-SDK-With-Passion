/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@interface PMiOSPlayheadView : UIView

{
    UIView *_cursor;
}

@property (weak, nonatomic) UIView *cursor;

- (void)layoutSubviews;

@end
