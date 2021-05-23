/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SASyncAppMetaData;

@interface SASyncChunk : SABaseClientBoundCommand <Swift>

@property (copy, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) SASyncAppMetaData *appMetaData;
@property (copy, nonatomic) NSString *intentSlotName;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *postGen;
@property (copy, nonatomic) NSString *preGen;
@property (copy, nonatomic) NSArray *toAdd;
@property (copy, nonatomic) NSArray *toRemove;
@property (copy, nonatomic) NSString *validity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)chunk;
+ (id)chunkWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
