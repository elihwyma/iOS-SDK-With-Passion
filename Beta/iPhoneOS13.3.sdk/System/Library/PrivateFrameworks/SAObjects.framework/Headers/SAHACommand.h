/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber, NSString, SAHAFilter;

@interface SAHACommand : SADomainCommand

@property (copy, nonatomic) NSArray *actionRequests;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSNumber *commandTimeout;
@property (retain, nonatomic) SAHAFilter *filter;
@property (nonatomic) _Bool mutatingCommand;
@property (copy, nonatomic) NSString *serverValidity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;

+ (id)command;
+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
