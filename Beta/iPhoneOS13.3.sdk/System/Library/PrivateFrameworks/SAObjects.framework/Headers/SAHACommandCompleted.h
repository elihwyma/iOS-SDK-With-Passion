/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SAHACommandCompleted : SABaseCommand <Swift>

@property (copy, nonatomic) NSArray *actionResults;
@property (copy, nonatomic) NSString *clientValidity;
@property (copy, nonatomic) NSString *commandOutcome;
@property (copy, nonatomic) NSURL *homeIdentifier;
@property (copy, nonatomic) NSString *serverValidity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)commandCompleted;
+ (id)commandCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
