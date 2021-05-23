/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class ICUserIdentity, NSString;

@interface MPCPlaybackAccount : NSObject <Swift>

{
    _Bool _hasCloudLibraryEnabled;
    _Bool _delegated;
    _Bool _activeAccount;
    ICUserIdentity *_userIdentity;
    NSString *_hashedDSID;
    unsigned long long _subscriptionCapabilities;
    NSString *_storeFrontIdentifier;
}

@property (copy, nonatomic) NSString *hashedDSID;
@property (nonatomic) _Bool hasCloudLibraryEnabled;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (nonatomic, getter=isDelegated) _Bool delegated;
@property (nonatomic, getter=isActiveAccount) _Bool activeAccount;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;
@property (nonatomic, readonly) unsigned long long subscriptionCapabilities;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserIdentity:(id)arg1 subscriptionCapabilities:(unsigned long long)arg2;

@end
