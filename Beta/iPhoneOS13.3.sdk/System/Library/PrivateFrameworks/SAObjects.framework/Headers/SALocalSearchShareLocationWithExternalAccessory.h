/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class SALocalSearchMapItem;

@interface SALocalSearchShareLocationWithExternalAccessory : SADomainCommand

@property (retain, nonatomic) SALocalSearchMapItem *mapItem;
@property (nonatomic) _Bool useNavigationDestination;

+ (id)shareLocationWithExternalAccessory;
+ (id)shareLocationWithExternalAccessoryWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
