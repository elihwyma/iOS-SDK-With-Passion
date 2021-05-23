/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@interface SSRestrictions : NSObject

+ (id)setOfActiveRestrictionUUIDs;
+ (_Bool)_isExplicitContentDisallowedInCurrentStoreFront;
+ (_Bool)_calculateIsRestrictionsPasscodeSet;
+ (_Bool)isActiveAccountAllowedToUpdateRestrictions;
+ (_Bool)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+ (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(CDUnknownBlockType)arg1;
+ (void)isExplicitContentDisallowedInCurrentStoreFront:(CDUnknownBlockType)arg1;
+ (void)isRestrictionsPasscodeSet:(CDUnknownBlockType)arg1;
+ (void)setAllowExplicitContent;
+ (void)shouldDisplayExplicitRestrictionAlertOfType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)didDisplayExplicitRestrictionAlertOfType:(long long)arg1;

@end
