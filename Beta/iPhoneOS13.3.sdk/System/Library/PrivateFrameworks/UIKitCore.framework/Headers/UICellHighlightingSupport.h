/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UICellHighlightingSupport : NSObject

{
    struct __CFDictionary *_unhighlightedStates;
    id _cell;
}

- (void)dealloc;
- (void)cacheState:(unsigned long long)arg1 forView:(id)arg2;
- (void)applyState:(unsigned long long)arg1 toView:(id)arg2;
- (void)highlightView:(id)arg1;
- (id)initWithCell:(id)arg1;

@end
