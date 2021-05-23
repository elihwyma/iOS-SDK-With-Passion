/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UIWebElementAction : NSObject

{
    NSString *_title;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _dismissalHandler;
    int _type;
}

@property (nonatomic, readonly) int type;
@property (copy, nonatomic) CDUnknownBlockType dismissalHandler;

+ (id)standardElementActionWithType:(int)arg1 customTitle:(id)arg2 context:(id)arg3;
+ (id)customElementActionWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
+ (id)standardElementActionWithType:(int)arg1;

- (void)dealloc;
- (id)_title;
- (id)initWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2 type:(int)arg3;
- (void)_runActionWithElement:(id)arg1 targetURL:(id)arg2 documentView:(id)arg3 interactionLocation:(struct CGPoint)arg4;

@end
