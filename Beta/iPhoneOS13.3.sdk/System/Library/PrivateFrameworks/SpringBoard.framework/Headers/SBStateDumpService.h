/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBServiceClientAuthenticator, NSString;

@interface SBStateDumpService : NSObject

{
    FBServiceClientAuthenticator *_clientAuthenticator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)_authenticateClient:(id)arg1;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 requestStateDump:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 enableRemoteStateDumpWithTimeout:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 disableRemoteStateDumpWithCompletion:(CDUnknownBlockType)arg3;

@end
