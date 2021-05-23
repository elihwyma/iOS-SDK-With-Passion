/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVTAvatarFetchRequest : NSObject

{
    NSArray *_identifiers;
    NSArray *_excludingIdentifiers;
    long long _criteria;
    long long _fetchLimit;
}

@property (copy, nonatomic, readonly) NSArray *identifiers;
@property (copy, nonatomic, readonly) NSArray *excludingIdentifiers;
@property (nonatomic, readonly) long long criteria;
@property (nonatomic, readonly) long long fetchLimit;

+ (id)requestForCustomAvatars;
+ (id)requestForPredefinedAvatars;
+ (id)requestForCustomAvatarsWithLimit:(long long)arg1;
+ (id)requestForAllAvatars;
+ (id)requestForAllAvatarsExcluding:(id)arg1;
+ (id)requestForAvatarWithIdentifier:(id)arg1;
+ (id)requestForAvatarsWithIdentifiers:(id)arg1;
+ (id)requestForStorePrimaryAvatar;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCriteria:(long long)arg1;
- (id)initWithCriteria:(long long)arg1 identifiers:(id)arg2 excludedIdentifiers:(id)arg3 fetchLimit:(long long)arg4;
- (id)initWithCriteria:(long long)arg1 identifier:(id)arg2;

@end
