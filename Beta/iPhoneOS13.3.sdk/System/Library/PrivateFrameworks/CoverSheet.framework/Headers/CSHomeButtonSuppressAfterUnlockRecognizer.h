/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class BSTimer, NSString;

@protocol SBHomeButtonSuppressAfterUnlockRecognizerDelegate;

@interface CSHomeButtonSuppressAfterUnlockRecognizer : NSObject

{
    id <SBHomeButtonSuppressAfterUnlockRecognizerDelegate> _delegate;
    BSTimer *_timer;
    _Bool _done;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBHomeButtonSuppressAfterUnlockRecognizerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)_invalidateTimer;
- (void)_startTimer;
- (void)_timerFired;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)_requestEndOfSuppression;

@end
