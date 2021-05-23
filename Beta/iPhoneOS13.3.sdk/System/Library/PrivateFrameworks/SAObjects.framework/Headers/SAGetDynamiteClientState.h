/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SADynamiteClientState;

@interface SAGetDynamiteClientState : SABaseClientBoundCommand

@property (retain, nonatomic) SADynamiteClientState *clientState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;

+ (id)getDynamiteClientState;
+ (id)getDynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
