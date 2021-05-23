/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIDisambiguationItemSelected : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *selectedAceId;

+ (id)disambiguationItemSelected;
+ (id)disambiguationItemSelectedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
