/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAAceDomainSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appIdHints;
@property (copy, nonatomic) NSString *domain;

+ (id)aceDomainSignal;
+ (id)aceDomainSignalWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
