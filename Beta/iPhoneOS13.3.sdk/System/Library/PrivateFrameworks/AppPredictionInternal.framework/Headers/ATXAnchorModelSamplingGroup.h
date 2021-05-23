/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface ATXAnchorModelSamplingGroup : NSObject

{
    NSArray *_anchorWhitelist;
    long long _samplingGroupId;
}

@property (nonatomic, readonly) NSArray *anchorWhitelist;
@property (nonatomic, readonly) long long samplingGroupId;

+ (id)getSamplingGroupForDataCollection;
+ (void)resetSamplingGroupAssignmentForUser;
+ (long long)assignSamplingGroupToUserAndPersistToDefaults:(id)arg1;
+ (long long)selectSamplingGroupForUser;
+ (unsigned long long)numSamplingGroups;
+ (id)samplingGroupFromSamplingGroupId:(long long)arg1;

- (id)init;
- (id)description;
- (id)initWithAnchorWhitelist:(id)arg1 samplingGroupId:(long long)arg2;

@end
