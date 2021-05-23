/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSDictionary, NSString;

@interface SAGlance : SADomainObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *glanceDisplayName;
@property (copy, nonatomic) NSString *glanceId;
@property (copy, nonatomic) NSDictionary *localizedGlanceDisplayNameMap;

+ (id)glance;
+ (id)glanceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
