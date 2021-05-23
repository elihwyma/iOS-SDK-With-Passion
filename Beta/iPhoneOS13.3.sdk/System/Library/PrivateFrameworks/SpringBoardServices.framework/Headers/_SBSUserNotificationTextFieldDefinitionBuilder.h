/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _SBSUserNotificationTextFieldDefinitionBuilder : NSObject

{
    NSMutableArray *_definitions;
}

- (id)init;
- (id)build;
- (void)addTextFieldDefinitionWithConfiguration:(CDUnknownBlockType)arg1;

@end
