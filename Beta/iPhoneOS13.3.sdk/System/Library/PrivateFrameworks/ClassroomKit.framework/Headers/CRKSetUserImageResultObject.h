/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSString;

@interface CRKSetUserImageResultObject : CATTaskResultObject

{
    NSString *_imageIdentifier;
}

@property (copy, nonatomic) NSString *imageIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
