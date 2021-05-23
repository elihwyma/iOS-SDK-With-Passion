/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXBoostObject : NSObject

{
    double _workBoost;
    double _workScale;
    double _homeBoost;
    double _homeScale;
    double _gymBoost;
    double _gymScale;
    double _schoolBoost;
    double _schoolScale;
}

@property (nonatomic, readonly) double workBoost;
@property (nonatomic, readonly) double workScale;
@property (nonatomic, readonly) double homeBoost;
@property (nonatomic, readonly) double homeScale;
@property (nonatomic, readonly) double gymBoost;
@property (nonatomic, readonly) double gymScale;
@property (nonatomic, readonly) double schoolBoost;
@property (nonatomic, readonly) double schoolScale;

- (id)initWithDictionary:(id)arg1;

@end
