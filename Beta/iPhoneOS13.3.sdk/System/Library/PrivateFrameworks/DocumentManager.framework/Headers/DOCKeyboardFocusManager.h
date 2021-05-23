/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@class NSPointerArray;

@protocol DOCKeyboardFocusable;

@interface DOCKeyboardFocusManager : NSObject

{
    id <DOCKeyboardFocusable> _currentlyFocused;
    NSPointerArray *_allKeyboardFocusable;
}

@property (retain) NSPointerArray *allKeyboardFocusable;

+ (id)sharedManager;

- (id)init;
- (id)currentlyFocused;
- (_Bool)restoreCurrentlyFocused;
- (void)registerKeyboardFocusable:(id)arg1;
- (_Bool)requestCurrentFocus:(id)arg1;
- (void)unregisterKeyboardFocusable:(id)arg1;
- (id)adjacentFocusableToFocusable:(id)arg1 direction:(long long)arg2;
- (void)_printAllRegisteredFocusable;
- (_Bool)_isRegistered:(id)arg1;

@end
