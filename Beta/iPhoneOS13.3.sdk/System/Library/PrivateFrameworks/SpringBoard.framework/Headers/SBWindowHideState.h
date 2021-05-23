/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBWindowHideState : NSObject

{
    _Bool _hidden;
    double _desiredAlpha;
}

@property (getter=isHidden) _Bool hidden;
@property double desiredAlpha;

- (id)description;

@end
