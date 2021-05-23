/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SACommandFailed : SABaseClientBoundCommand <Swift>

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;

+ (id)commandFailed;
+ (id)commandFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandFailedWithErrorCode:(long long)arg1;
+ (id)commandFailedWithReason:(id)arg1;

- (id)groupIdentifier;
- (id)initWithReason:(id)arg1;
- (id)encodedClassName;
- (id)initWithErrorCode:(long long)arg1;
- (_Bool)requiresResponse;

@end
