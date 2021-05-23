/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol UIDragSession;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceControllerSessionState : NSObject

{
    id <UIDragSession> _dragSession;
}

@property (retain, nonatomic) id <UIDragSession> dragSession;
@property (nonatomic, readonly) _Bool isActive;

- (id)description;

@end
