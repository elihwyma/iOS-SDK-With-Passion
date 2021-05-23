/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SBSwitcherModifierActionSnapshot : NSObject

{
    NSArray *_actionNames;
    NSArray *_actionDescriptions;
}

@property (retain, nonatomic) NSArray *actionNames;
@property (retain, nonatomic) NSArray *actionDescriptions;

@end
