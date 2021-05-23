/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXLocationOfInterest, NSDate;

@interface ATXPredictedTransition : NSObject

{
    NSDate *_date;
    ATXLocationOfInterest *_loi;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) ATXLocationOfInterest *loi;

- (id)init;
- (id)description;
- (id)transitionArrayForDate:(id)arg1;
- (id)initWithDate:(id)arg1 loi:(id)arg2;

@end
