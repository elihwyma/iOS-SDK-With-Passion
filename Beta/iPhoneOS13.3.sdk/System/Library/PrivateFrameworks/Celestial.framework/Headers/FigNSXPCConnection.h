/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSXPCConnection.h>

@class NSObject;

@protocol OS_dispatch_group;

@interface FigNSXPCConnection : NSXPCConnection

{
    NSObject<OS_dispatch_group> *_connectionRunningGroup;
    _Bool _explicitlyInvalidated;
}

@property (nonatomic, readonly) _Bool explicitlyInvalidated;

- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)blockUntilInvalidateHandlerHasBeenCalled;

@end
