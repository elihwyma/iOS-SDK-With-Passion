/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUBLEAdvertiser;

@protocol OS_dispatch_queue;

@interface CUOSRecoveryTarget : NSObject

{
    _Bool _activateCalled;
    CUBLEAdvertiser *_bleAdvertiser;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activate;
- (void)_reportProgressType:(int)arg1;

@end
