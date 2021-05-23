/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSData;

@interface CRKFetchUserImageResultObject : CATTaskResultObject

{
    NSData *_userImageData;
}

@property (copy, nonatomic) NSData *userImageData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
