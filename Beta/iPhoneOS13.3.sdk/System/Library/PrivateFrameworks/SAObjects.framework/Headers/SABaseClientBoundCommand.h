/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SABaseClientBoundCommand : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (copy, nonatomic) NSString *metricsContext;
@property (copy, nonatomic) NSNumber *usefulnessScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)baseClientBoundCommand;
+ (id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
