/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUGarageDoorStateTransition : NSObject

{
    _Bool _fromOpenState;
    _Bool _toOpenState;
}

@property (nonatomic) _Bool fromOpenState;
@property (nonatomic) _Bool toOpenState;

+ (id)transitionFromState:(_Bool)arg1 toState:(_Bool)arg2;

@end
