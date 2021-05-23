/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <UIView.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface _PGPlaybackProgressIndicatorRangesView : UIView

{
    UIColor *_rangeColor;
    NSArray *_ranges;
}

@property (retain, nonatomic) UIColor *rangeColor;
@property (retain, nonatomic) NSArray *ranges;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
