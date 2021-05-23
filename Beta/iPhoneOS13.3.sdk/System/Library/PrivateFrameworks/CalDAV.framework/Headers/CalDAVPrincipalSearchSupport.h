/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <Foundation/NSObject.h>

@interface CalDAVPrincipalSearchSupport : NSObject

+ (id)namespaceAndNameForWellKnownType:(int)arg1;
+ (id)resultTypeForRecordType:(id)arg1;
+ (id)namespaceForWellKnownType:(int)arg1;
+ (id)nameForWellKnownType:(int)arg1;
+ (id)propertySearchItemForWellKnownType:(int)arg1;
+ (id)parserMappingsWithServerSupportSet:(id)arg1 includeEmail:(_Bool)arg2;

@end
