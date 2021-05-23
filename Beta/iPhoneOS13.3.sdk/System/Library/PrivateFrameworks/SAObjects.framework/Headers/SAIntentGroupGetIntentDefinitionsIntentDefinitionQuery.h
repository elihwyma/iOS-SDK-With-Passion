/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAIntentGroupGetIntentDefinitionsIntentDefinitionQuery : AceObject <Swift>

@property (copy, nonatomic) NSString *entity;
@property (copy, nonatomic) NSString *verb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)getIntentDefinitionsIntentDefinitionQuery;
+ (id)getIntentDefinitionsIntentDefinitionQueryWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
