/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSString, WFAction, WFUberProduct;

@interface WFUberSeatCountPickerParameter : WFEnumerationParameter

{
    WFAction *_action;
    WFUberProduct *_product;
}

@property (retain, nonatomic) WFAction *action;
@property (retain, nonatomic) WFUberProduct *product;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isHidden;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)updateProduct;

@end
