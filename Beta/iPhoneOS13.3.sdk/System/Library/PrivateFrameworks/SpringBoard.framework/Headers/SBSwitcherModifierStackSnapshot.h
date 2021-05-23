/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SBSwitcherModifierQuerySnapshot;

@interface SBSwitcherModifierStackSnapshot : NSObject

{
    NSString *_modifierName;
    SBSwitcherModifierQuerySnapshot *_querySnapshot;
    NSArray *_childSnapshots;
}

@property (retain, nonatomic) NSString *modifierName;
@property (retain, nonatomic) SBSwitcherModifierQuerySnapshot *querySnapshot;
@property (retain, nonatomic) NSArray *childSnapshots;

- (void)enumerateModifierSnapshots:(CDUnknownBlockType)arg1;
- (void)_enumerateModifierSnapshots:(CDUnknownBlockType)arg1 stop:(_Bool *)arg2;

@end
