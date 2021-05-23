/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAKnowledgeDeleteValueForKey : SABaseClientBoundCommand <Swift>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *storeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)deleteValueForKey;
+ (id)deleteValueForKeyWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
