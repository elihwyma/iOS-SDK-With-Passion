/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAIntentGroupAppVocabularySearchRequest : SABaseClientBoundCommand <Swift>

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *appVocabularyType;
@property (copy, nonatomic) NSString *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)appVocabularySearchRequest;
+ (id)appVocabularySearchRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
