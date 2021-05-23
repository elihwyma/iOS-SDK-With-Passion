/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchMeCardResultObject : CATTaskResultObject

{
    NSDictionary *_cardInfo;
}

@property (copy, nonatomic) NSDictionary *cardInfo;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
