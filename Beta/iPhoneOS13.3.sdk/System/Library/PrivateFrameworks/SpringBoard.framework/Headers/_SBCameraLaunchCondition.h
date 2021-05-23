/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface _SBCameraLaunchCondition : NSObject

{
    _Bool _met;
}

@property (nonatomic, getter=isMet) _Bool met;

+ (id)conditionWithConditions:(id)arg1;
+ (id)conditionWithValue:(_Bool)arg1;

@end
