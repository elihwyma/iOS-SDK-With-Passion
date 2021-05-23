/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SALCMTvSubscriptionsClientState;

@interface SALCMSetTvSubscriptionsClientState : SABaseCommand <Swift>

@property (retain, nonatomic) SALCMTvSubscriptionsClientState *clientState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)setTvSubscriptionsClientState;
+ (id)setTvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
