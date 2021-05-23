/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UITapGestureRecognizer.h>

@interface TSDTapGestureRecognizer : UITapGestureRecognizer

{
    struct CGPoint mFirstTapLocation;
    _Bool mSavedFirstTapLocation;
    unsigned long long mTapCount;
}

@property (nonatomic, readonly) struct CGPoint firstTapLocation;
@property (nonatomic, readonly) unsigned long long tapCount;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
