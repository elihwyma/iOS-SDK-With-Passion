/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, NSURL;

@interface SAUIAppPunchOutEvent : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *appDisplayName;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *originalCommandId;
@property (copy, nonatomic) NSString *punchOutName;
@property (copy, nonatomic) NSURL *punchOutUri;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)appPunchOutEvent;
+ (id)appPunchOutEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
