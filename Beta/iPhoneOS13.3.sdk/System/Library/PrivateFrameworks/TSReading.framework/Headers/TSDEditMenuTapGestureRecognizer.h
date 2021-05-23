/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UITapGestureRecognizer.h>

@class TSDRep;

@interface TSDEditMenuTapGestureRecognizer : UITapGestureRecognizer

{
    TSDRep *mTouchedRep;
    _Bool mIgnoreTargetAction;
}

@property (nonatomic) _Bool ignoreTargetAction;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)touchedRep;

@end
