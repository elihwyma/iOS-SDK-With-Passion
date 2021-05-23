/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBApplicationSceneEntityDestructionIntent : NSObject

{
    _Bool _shouldRemoveFromHistory;
    unsigned long long _layoutRoles;
    unsigned long long _animation;
}

@property (nonatomic) unsigned long long layoutRoles;
@property (nonatomic) unsigned long long animation;
@property (nonatomic) _Bool shouldRemoveFromHistory;

@end
