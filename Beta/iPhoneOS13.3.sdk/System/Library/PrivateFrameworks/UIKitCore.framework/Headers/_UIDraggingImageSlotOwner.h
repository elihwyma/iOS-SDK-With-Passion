/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, _UIDragManager;

__attribute__((visibility("hidden")))
@interface _UIDraggingImageSlotOwner : NSObject

{
    NSMutableArray *_usedSlotIDs;
    _UIDragManager *_dragManager;
}

@property (weak, nonatomic, readonly) _UIDragManager *dragManager;

- (void)dealloc;
- (unsigned int)uploadImage:(struct CGImage *)arg1;
- (id)initWithDragManager:(id)arg1;

@end
