/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage, WFAction;

@interface WFModuleOutputModel : NSObject

{
    _Bool _extensionInput;
    WFAction *_action;
    NSString *_name;
    UIImage *_icon;
    CKTypedComponentAction_173db1b5 _tapAction;
}

@property (nonatomic, readonly) WFAction *action;
@property (nonatomic, readonly, getter=isExtensionInput) _Bool extensionInput;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) CKTypedComponentAction_173db1b5 tapAction;

+ (id)modelForAction:(id)arg1 withTapAction:(CKTypedComponentAction_173db1b5)arg2;
+ (id)modelForExtensionInputWithTapAction:(CKTypedComponentAction_173db1b5)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithAction:(id)arg1 tapAction:(CKTypedComponentAction_173db1b5)arg2;
- (id)initWithExtensionInputAndTapAction:(CKTypedComponentAction_173db1b5)arg1;

@end
