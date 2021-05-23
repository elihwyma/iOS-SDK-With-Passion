/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@interface UIAccessibilityCustomAction : NSObject

{
    NSAttributedString *_attributedName;
    id _target;
    SEL _selector;
    CDUnknownBlockType _actionHandler;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSAttributedString *attributedName;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (copy, nonatomic) CDUnknownBlockType actionHandler;

- (id)init;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)initWithName:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAttributedName:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;

@end
