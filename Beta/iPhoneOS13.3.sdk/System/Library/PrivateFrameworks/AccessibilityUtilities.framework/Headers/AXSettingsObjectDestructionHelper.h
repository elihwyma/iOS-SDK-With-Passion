/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface AXSettingsObjectDestructionHelper : NSObject

{
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void)dealloc;
- (id)initWithListenerAddress:(void *)arg1;
- (void)addSelectorKey:(SEL)arg1;

@end
