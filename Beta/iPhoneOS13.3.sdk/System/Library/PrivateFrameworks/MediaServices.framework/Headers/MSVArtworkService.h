/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject

{
    NSOperationQueue *_serviceThrottlingOperationQueue;
    NSXPCConnection *_serverConnection;
}

@property (retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue;
@property (retain, nonatomic) NSXPCConnection *serverConnection;

+ (id)sharedService;

- (id)init;
- (void)dealloc;
- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
