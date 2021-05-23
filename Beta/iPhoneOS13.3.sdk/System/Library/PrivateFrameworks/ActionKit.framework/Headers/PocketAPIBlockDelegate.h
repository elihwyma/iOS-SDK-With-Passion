/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PocketAPIBlockDelegate : NSObject

{
    CDUnknownBlockType loginHandler;
    CDUnknownBlockType saveHandler;
    CDUnknownBlockType responseHandler;
}

@property (copy, nonatomic) CDUnknownBlockType loginHandler;
@property (copy, nonatomic) CDUnknownBlockType saveHandler;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)delegateWithLoginHandler:(CDUnknownBlockType)arg1;
+ (id)delegateWithSaveHandler:(CDUnknownBlockType)arg1;
+ (id)delegateWithResponseHandler:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (void)pocketAPILoggedIn:(id)arg1;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)pocketAPI:(id)arg1 savedURL:(id)arg2;
- (void)pocketAPI:(id)arg1 failedToSaveURL:(id)arg2 error:(id)arg3;
- (void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4;

@end
