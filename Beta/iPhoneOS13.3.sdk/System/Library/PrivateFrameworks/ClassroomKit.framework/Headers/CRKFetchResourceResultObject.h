/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSData;

@interface CRKFetchResourceResultObject : CATTaskResultObject

{
    NSData *_resourceData;
}

@property (retain, nonatomic) NSData *resourceData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
