/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIWindow.h>

@class NSHashTable;

@interface CPSWindow : UIWindow

{
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSHashTable *observers;

- (void)sendEvent:(id)arg1;
- (_Bool)_isKeyWindowForDeferral;
- (void)addEventObserver:(id)arg1;
- (void)removeEventObserver:(id)arg1;

@end
