/*
 Image: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface FontProviderManager : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedManager;
+ (void)registerFonts:(id)arg1 enabled:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)unregisterFonts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)registeredFontsInfo:(_Bool)arg1;

- (id)init;
- (void)_registerFonts:(id)arg1 enabled:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)normalizeURLs:(id)arg1;
- (void)_unregisterFonts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)registeredFontsInfo:(_Bool)arg1;

@end
