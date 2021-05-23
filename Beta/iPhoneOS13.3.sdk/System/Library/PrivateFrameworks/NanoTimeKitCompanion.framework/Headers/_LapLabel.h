/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UILabel.h>

@interface _LapLabel : UILabel

{
    _Bool _split;
    unsigned long long _lap;
}

@property (nonatomic) unsigned long long lap;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)split;

@end
