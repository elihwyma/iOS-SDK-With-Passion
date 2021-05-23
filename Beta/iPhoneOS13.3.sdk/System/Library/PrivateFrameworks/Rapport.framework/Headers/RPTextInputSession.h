/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSString, RTIInputSystemSourceSession;

@protocol OS_dispatch_queue, RPMessageable;

@interface RPTextInputSession : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _started;
    id <RPMessageable> _messenger;
    RTIInputSystemSourceSession *_rtiSession;
    CDUnknownBlockType _rtiUpdatedHandler;
}

@property (retain, nonatomic) id <RPMessageable> messenger;
@property (nonatomic, readonly) RTIInputSystemSourceSession *rtiSession;
@property (copy, nonatomic) CDUnknownBlockType rtiUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleTextActionPayload:(id)arg1;
- (void)_handleTextInputStarted:(id)arg1;
- (void)_handleTextInputStopped:(id)arg1;
- (void)_handleTextInputChange:(id)arg1 started:(_Bool)arg2;

@end
