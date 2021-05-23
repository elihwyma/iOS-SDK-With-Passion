/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchControlGroupIdentifiersResultObject : CATTaskResultObject

{
    NSArray *_groupIdentifiers;
}

@property (copy, nonatomic) NSArray *groupIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupIdentifiers:(id)arg1;

@end
