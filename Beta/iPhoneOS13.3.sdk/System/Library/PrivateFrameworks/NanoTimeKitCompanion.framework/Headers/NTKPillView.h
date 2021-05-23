/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface NTKPillView : UIView

{
    NSArray *_pillColors;
    unsigned long long _colorLimitCount;
}

@property (copy, nonatomic) NSArray *pillColors;
@property (nonatomic) unsigned long long colorLimitCount;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
