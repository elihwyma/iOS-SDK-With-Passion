/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSObjCProtocol, NSString;

@interface BSServiceInterface : NSObject

{
    NSString *_identifier;
    BSObjCProtocol *_server;
    BSObjCProtocol *_client;
    struct __CFBoolean *_clientWaitsForActivation;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) long long clientMessagingExpectation;
@property (copy, nonatomic, readonly) BSObjCProtocol *server;
@property (copy, nonatomic, readonly) BSObjCProtocol *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)interfaceWithServer:(id)arg1 client:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 server:(id)arg2 client:(id)arg3 clientWaitsForActivation:(struct __CFBoolean *)arg4;

@end
