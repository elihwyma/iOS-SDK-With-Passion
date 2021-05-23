/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableSet, NSString, NSXPCConnection;

@interface LZHbEqKhcixce9PA : NSObject

{
    NSXPCConnection *_connection;
    NSMutableSet *_disconnectionCallbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithServiceName:(id)arg1;
- (void)JI0A3nkqsab9cUj8:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)QeMnG23X94qgz7jT:(id)arg1 hostChallenge:(id)arg2 challengeResponse:(id)arg3 seid:(id)arg4 nonce:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)Z8aAH7stm0EYhyxg:(id)arg1 uhVTXyAfCFn7u0Ue:(id)arg2 nG8az2sHG5tJ9P9c:(id)arg3 TJKMyOe6zn5PdGIr:(id)arg4 hostChallenge:(id)arg5 challengeResponse:(id)arg6 seid:(id)arg7 completion:(CDUnknownBlockType)arg8;

@end
