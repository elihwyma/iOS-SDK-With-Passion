/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWebSelectionGraph : NSObject

{
    NSMutableArray *_selectionNodes;
}

- (id)init;
- (void)dealloc;
- (id)addNodeFromSelection:(id)arg1;
- (void)exploreFromNode:(id)arg1 outwards:(_Bool)arg2 maxDepth:(int)arg3;
- (void)clearNodes;
- (void)exploreFromNode:(id)arg1;

@end
