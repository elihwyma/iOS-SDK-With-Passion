/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface PAImageConversionServiceClient : NSObject

{
    NSXPCConnection *_serviceConnection;
}

@property (retain) NSXPCConnection *serviceConnection;

- (id)init;
- (void)dealloc;
- (void)convertImageAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setupServiceConnection;
- (void)convertImageAtSourceURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
