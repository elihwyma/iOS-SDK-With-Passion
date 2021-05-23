/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, RPMessageable;

@interface RPHIDSession : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id <RPMessageable> _messenger;
}

@property (retain, nonatomic) id <RPMessageable> messenger;

- (id)init;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)hidCommand:(int)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hidCommand:(int)arg1 buttonState:(int)arg2 destinationID:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
