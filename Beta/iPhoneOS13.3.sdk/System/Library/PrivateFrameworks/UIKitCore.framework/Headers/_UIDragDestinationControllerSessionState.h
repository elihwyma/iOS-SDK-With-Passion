/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol UIDropSession;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationControllerSessionState : NSObject

{
    int _state;
    id <UIDropSession> _dropSession;
}

@property (nonatomic) int state;
@property (retain, nonatomic) id <UIDropSession> dropSession;
@property (nonatomic, readonly) _Bool isReordering;
@property (nonatomic, readonly) _Bool isDragging;
@property (nonatomic, readonly) _Bool isActive;

- (id)description;

@end
