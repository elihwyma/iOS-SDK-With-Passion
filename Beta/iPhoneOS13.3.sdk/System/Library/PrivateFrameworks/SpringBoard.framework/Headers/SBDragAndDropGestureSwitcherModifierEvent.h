/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifierEvent.h>

@class NSString;

@interface SBDragAndDropGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

{
    long long _dropAction;
    NSString *_draggedSceneIdentifier;
    double _platterScale;
    struct CGRect _platterViewFrame;
}

@property (nonatomic) long long dropAction;
@property (retain, nonatomic) NSString *draggedSceneIdentifier;
@property (nonatomic) struct CGRect platterViewFrame;
@property (nonatomic) double platterScale;

- (long long)type;

@end
