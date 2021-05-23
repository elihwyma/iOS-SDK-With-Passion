/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@interface CRKFetchNumberOfDaysBeforeAutomaticRemovalResultObject : CATTaskResultObject

{
    long long _numberOfDaysBeforeAutomaticRemoval;
}

@property (nonatomic) long long numberOfDaysBeforeAutomaticRemoval;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumberOfDaysBeforeAutomaticRemoval:(long long)arg1;

@end
