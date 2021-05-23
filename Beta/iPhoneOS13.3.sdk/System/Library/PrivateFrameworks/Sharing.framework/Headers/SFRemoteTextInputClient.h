/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, RTIInputSystemService, RTIInputSystemSourceSession;

@protocol OS_dispatch_queue;

@interface SFRemoteTextInputClient : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _paused;
    RTIInputSystemService *_rtiService;
    RTIInputSystemSourceSession *_rtiSourceSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _textInputDidBegin;
    CDUnknownBlockType _textInputDidEnd;
}

@property (copy, nonatomic, readonly) NSDictionary *currentPayload;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType eventHandler;
@property (nonatomic, readonly) RTIInputSystemSourceSession *sourceSession;
@property (copy, nonatomic) CDUnknownBlockType textInputDidBegin;
@property (copy, nonatomic) CDUnknownBlockType textInputDidEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)flushOperations;
- (void)performTextOperations:(id)arg1;
- (void)handleTextActionPayload:(id)arg1;
- (void)_fireEventHandlerWithPayload:(id)arg1;
- (void)fireEventHandlerWithPayload:(id)arg1;
- (void)_handleSessionEvent:(long long)arg1 forSession:(id)arg2;
- (void)inputSystemService:(id)arg1 didCreateInputSession:(id)arg2;
- (void)inputSystemService:(id)arg1 inputSessionDidBegin:(id)arg2;
- (void)inputSystemService:(id)arg1 inputSessionDidEnd:(id)arg2;
- (void)inputSystemService:(id)arg1 inputSessionDidDie:(id)arg2;
- (void)inputSystemService:(id)arg1 inputSessionDocumentDidChange:(id)arg2;
- (void)inputSystemService:(id)arg1 inputSessionDidPause:(id)arg2 withReason:(id)arg3;
- (void)inputSystemService:(id)arg1 inputSessionDidUnpause:(id)arg2 withReason:(id)arg3;
- (void)handleTextInputData:(struct NSDictionary *)arg1;
- (void)handleUsername:(id)arg1 password:(id)arg2;

@end
