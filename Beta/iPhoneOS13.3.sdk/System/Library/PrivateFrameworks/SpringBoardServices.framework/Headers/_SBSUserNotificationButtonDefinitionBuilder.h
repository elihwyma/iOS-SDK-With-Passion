/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _SBSUserNotificationButtonDefinitionBuilder : NSObject

{
    NSMutableArray *_definitions;
}

- (id)init;
- (id)build;
- (void)addButtonDefinitionWithTitle:(id)arg1 withConfiguration:(CDUnknownBlockType)arg2;

@end
