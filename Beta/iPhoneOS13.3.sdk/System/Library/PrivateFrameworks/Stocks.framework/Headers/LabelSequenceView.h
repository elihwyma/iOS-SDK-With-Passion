/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface LabelSequenceView : UIView

{
    NSArray *_stringDrawingInfoValues;
}

@property (retain, nonatomic) NSArray *stringDrawingInfoValues;

- (id)init;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)requiredSize;

@end
