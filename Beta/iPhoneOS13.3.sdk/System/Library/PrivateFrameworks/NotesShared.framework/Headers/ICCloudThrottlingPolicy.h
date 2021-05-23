/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICCloudThrottlingLevel, NSArray, NSDate, NSTimer;

@interface ICCloudThrottlingPolicy : NSObject

{
    NSArray *_throttlingLevels;
    double _resetInterval;
    unsigned long long _currentBatchCount;
    unsigned long long _currentLevelIndex;
    NSDate *_policyStartDate;
    NSTimer *_policyResetTimer;
}

@property (nonatomic) unsigned long long currentBatchCount;
@property (retain, nonatomic) NSArray *throttlingLevels;
@property (nonatomic) unsigned long long currentLevelIndex;
@property (nonatomic, readonly) ICCloudThrottlingLevel *currentLevel;
@property double resetInterval;
@property (retain) NSDate *policyStartDate;
@property (retain) NSTimer *policyResetTimer;
@property (nonatomic, readonly) double batchInterval;

+ (void)resetSavedPolicyState;

- (id)init;
- (void)dealloc;
- (id)initWithThrottlingLevels:(id)arg1 resetInterval:(double)arg2;
- (void)loadSavedPolicyState;
- (void)resetPolicy;
- (void)startPolicyResetTimer;
- (void)changeLevelIfNecessary;
- (void)savePolicyState;
- (void)incrementBatchCount;

@end
