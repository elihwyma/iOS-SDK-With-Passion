/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAIntentGroupSiriKitParameterMetadata : AceObject <Swift>

@property (copy, nonatomic) NSArray *confirmationStates;
@property (copy, nonatomic) NSString *parameterName;
@property (nonatomic) _Bool shouldResolve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)siriKitParameterMetadata;
+ (id)siriKitParameterMetadataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
