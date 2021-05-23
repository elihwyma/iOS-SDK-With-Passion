/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBTransaction.h>

@class BSWatchdog, FBProcess, NSString;

@interface FBWaitForProcessDeathTransaction : FBTransaction

{
    FBProcess *_process;
    double _timeout;
    BSWatchdog *_watchdog;
}

@property (nonatomic, readonly) FBProcess *process;
@property (nonatomic, readonly) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProcess:(id)arg1;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (id)initWithProcess:(id)arg1 timeout:(double)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;

@end
