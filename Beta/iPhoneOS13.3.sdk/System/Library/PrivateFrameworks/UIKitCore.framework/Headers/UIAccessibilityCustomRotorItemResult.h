/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSUUID, UITextRange;

@protocol NSObject;

@interface UIAccessibilityCustomRotorItemResult : NSObject

{
    NSUUID *uuid;
    id <NSObject> _targetElement;
    UITextRange *_targetRange;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) id <NSObject> targetElement;
@property (retain, nonatomic) UITextRange *targetRange;

- (id)initWithTargetElement:(id)arg1 targetRange:(id)arg2;

@end
