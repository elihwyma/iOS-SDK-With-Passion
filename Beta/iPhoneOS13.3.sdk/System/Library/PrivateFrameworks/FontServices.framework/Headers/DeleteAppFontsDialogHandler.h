/*
 Image: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener;

@interface DeleteAppFontsDialogHandler : NSObject

{
    CDUnknownBlockType _completionHandler;
    NSXPCListener *_listener;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)doneWithDeleteAppFonts:(_Bool)arg1;
- (void)showDialogWithUserInfo:(id)arg1;

@end
