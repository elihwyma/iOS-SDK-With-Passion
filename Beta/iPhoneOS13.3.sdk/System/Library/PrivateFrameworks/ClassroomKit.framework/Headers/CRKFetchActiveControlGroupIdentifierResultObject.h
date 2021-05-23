/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class DMFControlGroupIdentifier;

@interface CRKFetchActiveControlGroupIdentifierResultObject : CATTaskResultObject

{
    DMFControlGroupIdentifier *_groupIdentifier;
}

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
