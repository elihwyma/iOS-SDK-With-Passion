/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@protocol OS_dispatch_queue, RPMessageable;

@interface RPHIDTouchSession : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSNumber *_touchSessionID;
    unsigned int _flags;
    id <RPMessageable> _messenger;
    struct CGSize _screenSize;
}

@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) id <RPMessageable> messenger;
@property (nonatomic) struct CGSize screenSize;

- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendTouchEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
