/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SACFAbstractClientCommand;

@interface SACFSignal : SADomainCommand

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *flowScriptHint;
@property (copy, nonatomic) NSArray *scriptIdentifiers;
@property (retain, nonatomic) SACFAbstractClientCommand *signalPayload;

+ (id)signal;
+ (id)signalWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
