/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSDisplayLayoutMonitor, NSArray, NSString;

@interface SBOrientationAggdLogger : NSObject

{
    FBSDisplayLayoutMonitor *_layoutMonitor;
    long long _currentOrientation;
    unsigned long long _currentOrientationStartTime;
    NSArray *_currentElements;
    _Bool _isKeyboardOnScreen;
    unsigned long long _keyboardOnScreenStartTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)_noteSignificantTimeChanged:(id)arg1;
- (void)_orientationLockChanged:(id)arg1;
- (double)_bucketedElapsedTimeWithStartTime:(unsigned long long)arg1;
- (void)_saveOrientationLockAggdValues;

@end
