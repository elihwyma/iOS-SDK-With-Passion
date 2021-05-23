/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASetSupportedLocales : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *locales;

+ (id)setSupportedLocales;
+ (id)setSupportedLocalesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
