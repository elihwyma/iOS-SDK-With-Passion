/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface GKEditAction : NSObject

{
    _Bool _destructive;
    NSString *_name;
    SEL _selector;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) SEL selector;
@property (nonatomic) _Bool destructive;

+ (id)actionWithName:(id)arg1 selector:(SEL)arg2;
+ (id)deleteActionWithName:(id)arg1;

- (void)dealloc;

@end
