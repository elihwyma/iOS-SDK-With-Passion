/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, SARemoteDevice;

@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand

@property (retain, nonatomic) SARemoteDevice *remoteDevice;
@property (nonatomic) _Bool requiresResponseFromRemote;
@property (copy, nonatomic) NSData *serializedCommand;

+ (id)executeOnRemoteRequest;
+ (id)executeOnRemoteRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
