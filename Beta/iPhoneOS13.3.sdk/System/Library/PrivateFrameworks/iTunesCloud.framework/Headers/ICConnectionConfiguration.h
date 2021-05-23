/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICUserIdentity, ICUserIdentityStore, NSNumber, NSString, NSURL;

@interface ICConnectionConfiguration : NSObject <Swift>

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
+ (id)configurationFromSourceConfiguration:(id)arg1 userIdentity:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserIdentity:(id)arg1;
- (id)initWithUserIdentity:(id)arg1 userIdentityStore:(id)arg2;

@end
