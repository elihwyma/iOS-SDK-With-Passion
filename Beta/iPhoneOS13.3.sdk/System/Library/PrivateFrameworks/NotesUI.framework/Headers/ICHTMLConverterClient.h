/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ICHTMLConverterClient : NSObject

{
    NSXPCConnection *_connectionToService;
    NSObject<OS_dispatch_queue> *_requestCountQueue;
    unsigned long long _requestCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue;
@property (nonatomic) unsigned long long requestCount;

+ (id)sharedClient;

- (id)init;
- (void)dealloc;
- (void)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 timeoutDate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)attributedStringFromHTMLString:(id)arg1;
- (void)resumeConnectionIfNeeded;
- (void)suspendConnectionIfNeeded;

@end
