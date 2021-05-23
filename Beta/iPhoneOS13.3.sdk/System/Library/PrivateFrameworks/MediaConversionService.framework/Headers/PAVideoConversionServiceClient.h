/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection, PFDispatchQueue;

@interface PAVideoConversionServiceClient : NSObject

{
    NSXPCConnection *_serviceConnection;
    NSMutableDictionary *_pendingRequestIdentifierToProgressMap;
    PFDispatchQueue *_isolationQueue;
    unsigned long long _state;
}

@property (retain) NSXPCConnection *serviceConnection;
@property (retain) NSMutableDictionary *pendingRequestIdentifierToProgressMap;
@property (retain) PFDispatchQueue *isolationQueue;
@property unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidateAfterPendingRequestCompletion;
- (void)updateProgress:(id)arg1;
- (id)convertVideoAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setupServiceConnection;
- (id)convertVideoAtSourceURL:(id)arg1 toDestinationURL:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)extractStillImageFromVideoAtSourceURL:(id)arg1 toDestinationURL:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleRequestCompletionForIdentifier:(id)arg1;
- (void)transitionToInvalidatedState;
- (void)performCleanupForJobGroupIdentifier:(id)arg1;
- (void)ut_invalidateServiceConnection;

@end
