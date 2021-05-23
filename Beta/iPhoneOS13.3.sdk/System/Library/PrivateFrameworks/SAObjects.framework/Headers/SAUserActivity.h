/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAUserActivity : SADomainObject

@property (copy, nonatomic) NSArray *eligibileFunctions;
@property (copy, nonatomic) NSString *internalGUID;
@property (nonatomic) _Bool isEligibleForAppPunchout;
@property (nonatomic) _Bool isEligibleForDirections;
@property (nonatomic) _Bool isEligibleForHandoff;
@property (nonatomic) _Bool isEligibleForPublicIndexing;
@property (nonatomic) _Bool isEligibleForReminders;
@property (nonatomic) _Bool isEligibleForSearch;

+ (id)userActivity;
+ (id)userActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
