/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface PLRemoteDiagnosticsClient : NSObject

{
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)diagnosticsAgentWithErrorHandler:(CDUnknownBlockType)arg1;
+ (id)_connectionForListenerEndpoint:(id)arg1;

@end
