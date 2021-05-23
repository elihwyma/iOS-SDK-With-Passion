/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@interface SBIconDraggingEditContext : NSObject

{
    _Bool _enteredScreenLocationNeedsUpdate;
    id _draggingUniqueIdentifier;
    struct CGPoint _enteredScreenLocation;
}

@property (retain, nonatomic) id draggingUniqueIdentifier;
@property (nonatomic) struct CGPoint enteredScreenLocation;
@property (nonatomic) _Bool enteredScreenLocationNeedsUpdate;

@end
