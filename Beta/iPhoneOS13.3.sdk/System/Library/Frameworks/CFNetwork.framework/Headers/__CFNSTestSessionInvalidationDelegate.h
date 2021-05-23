/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSOperationQueue, NSString;

@interface __CFNSTestSessionInvalidationDelegate : NSObject <Swift>

{
    NSOperationQueue *_q;
    CDUnknownBlockType _taskCompleted;
    CDUnknownBlockType _sessionCompleted;
}

@property (retain) NSOperationQueue *q;
@property CDUnknownBlockType taskCompleted;
@property CDUnknownBlockType sessionCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;

@end
