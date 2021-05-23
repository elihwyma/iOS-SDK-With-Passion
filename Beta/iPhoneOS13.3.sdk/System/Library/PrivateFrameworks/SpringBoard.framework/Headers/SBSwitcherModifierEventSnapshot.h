/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBSwitcherModifierEventSnapshot : NSObject

{
    NSString *_eventName;
    NSString *_eventDescription;
}

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *eventDescription;

@end
