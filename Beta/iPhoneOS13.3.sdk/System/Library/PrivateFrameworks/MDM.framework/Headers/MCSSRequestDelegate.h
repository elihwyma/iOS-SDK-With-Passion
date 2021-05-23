/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <Foundation/NSObject.h>

#import <MDM/Swift-Protocol.h>

@class NSString, NSTimer, SSRequest;

@interface MCSSRequestDelegate : NSObject <Swift>

{
    SSRequest *_request;
    CDUnknownBlockType _completionBlock;
    NSTimer *_timeoutTimer;
}

@property (retain, nonatomic, readonly) SSRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (id)initWithRequest:(id)arg1;
- (void)_timerDidFire:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)_startTimeout:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
