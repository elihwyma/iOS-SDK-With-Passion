/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupIntentSearch : SABaseCommand <Swift>

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (copy, nonatomic) NSArray *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)intentSearch;
+ (id)intentSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
