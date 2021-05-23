/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSData, NSString;

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject

{
    NSData *_mdmIdentityPersistentID;
    NSString *_mdmIdentityCommonName;
}

@property (retain, nonatomic) NSData *mdmIdentityPersistentID;
@property (retain, nonatomic) NSString *mdmIdentityCommonName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
