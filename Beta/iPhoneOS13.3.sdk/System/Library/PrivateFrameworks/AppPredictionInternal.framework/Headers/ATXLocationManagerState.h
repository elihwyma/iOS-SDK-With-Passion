/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXLocationOfInterest, NSArray, NSDate;

@interface ATXLocationManagerState : NSObject

{
    ATXLocationOfInterest *_currentLOI;
    ATXLocationOfInterest *_previousLOI;
    NSArray *_predictedNextLOIs;
    NSArray *_predictedExitTimes;
    NSDate *_lastUpdateDate;
}

@property (retain, nonatomic) ATXLocationOfInterest *currentLOI;
@property (retain, nonatomic) ATXLocationOfInterest *previousLOI;
@property (retain, nonatomic) NSArray *predictedNextLOIs;
@property (retain, nonatomic) NSArray *predictedExitTimes;
@property (retain, nonatomic) NSDate *lastUpdateDate;

+ (_Bool)supportsSecureCoding;
+ (id)merge:(id)arg1 with:(id)arg2;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)expirePreviousLOIBefore:(id)arg1;

@end
