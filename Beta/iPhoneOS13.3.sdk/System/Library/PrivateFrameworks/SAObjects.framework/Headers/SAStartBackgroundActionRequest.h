/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@protocol SAAceSerializable;

@interface SAStartBackgroundActionRequest : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *backgroundAction;
@property (retain, nonatomic) id <SAAceSerializable> backgroundActionPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)startBackgroundActionRequest;
+ (id)startBackgroundActionRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
