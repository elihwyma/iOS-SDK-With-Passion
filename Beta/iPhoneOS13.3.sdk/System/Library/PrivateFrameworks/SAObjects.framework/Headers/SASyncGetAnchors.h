/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SASyncGetAnchors : SABaseClientBoundCommand <Swift>

@property (copy, nonatomic) NSArray *appMetaDataList;
@property (copy, nonatomic) NSDictionary *customVocabSources;
@property (nonatomic) _Bool includeAllKnownAnchors;
@property (copy, nonatomic) NSArray *sources;
@property (copy, nonatomic) NSString *syncReason;
@property (copy, nonatomic) NSArray *watchAppMetaDataList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)getAnchors;
+ (id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
