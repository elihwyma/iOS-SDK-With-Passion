/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSObject.h>

@class ICUserIdentity, ICUserIdentityStore, NSNumber, NSString, NSURL;

@interface HSConnectionConfiguration : NSObject

{
    ICUserIdentity *_userIdentity;
    ICUserIdentityStore *_userIdentityStore;
    NSURL *_baseURL;
    NSString *_libraryBagKey;
    NSString *_buildIdentifier;
    NSString *_purchaseClientIdentifier;
    long long _requestReason;
    NSNumber *_familyMemberStoreID;
}

@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (nonatomic, readonly) ICUserIdentityStore *userIdentityStore;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *libraryBagKey;
@property (copy, nonatomic) NSString *buildIdentifier;
@property (copy, nonatomic) NSString *purchaseClientIdentifier;
@property (nonatomic) long long requestReason;
@property (copy, nonatomic) NSNumber *familyMemberStoreID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
