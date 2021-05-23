/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSTimer;

@protocol SBWalletPrearmRecognizerDelegate;

@interface SBWalletPrearmRecognizer : NSObject

{
    id <SBWalletPrearmRecognizerDelegate> _delegate;
    double _timeout;
    BSTimer *_timer;
    _Bool _invalidated;
}

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithDelegate:(id)arg1;
- (double)_computeDoubleTapTimeout;
- (void)_invalidateForFailureReason:(unsigned long long)arg1;
- (void)_invalidateForSuccess;
- (void)startRecognizing;
- (void)menuButtonSinglePress;
- (void)menuButtonDoublePress;

@end
