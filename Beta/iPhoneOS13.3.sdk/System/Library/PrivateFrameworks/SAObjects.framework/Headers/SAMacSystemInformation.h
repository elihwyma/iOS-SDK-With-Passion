/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAMacSystemInformation : SADomainObject

@property (copy, nonatomic) NSString *query;

+ (id)systemInformation;
+ (id)systemInformationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
