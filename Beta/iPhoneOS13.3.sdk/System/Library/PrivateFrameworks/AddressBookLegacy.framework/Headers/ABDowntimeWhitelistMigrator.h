/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSObject.h>

@interface ABDowntimeWhitelistMigrator : NSObject

+ (_Bool)moveDowntimeWhitelistFromUnknownProperties:(struct CPSqliteConnection *)arg1;
+ (id)unknownPropertiesFromExternalRepresentation:(id)arg1;
+ (id)externalRepresentationFromUnknownProperties:(id)arg1;

@end
