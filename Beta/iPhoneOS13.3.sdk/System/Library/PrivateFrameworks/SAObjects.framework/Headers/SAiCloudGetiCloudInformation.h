/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAiCloudGetiCloudInformation : SADomainCommand

@property (copy, nonatomic) NSString *query;

+ (id)getiCloudInformation;
+ (id)getiCloudInformationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
