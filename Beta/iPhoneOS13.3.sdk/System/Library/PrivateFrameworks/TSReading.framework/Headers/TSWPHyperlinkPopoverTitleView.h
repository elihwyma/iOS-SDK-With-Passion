/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIView.h>

@class NSString;

@interface TSWPHyperlinkPopoverTitleView : UIView

{
    NSString *_titleString;
}

@property (retain, nonatomic) NSString *titleString;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 titleString:(id)arg2;

@end
