/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFItem, HUTriggerTimeConditionDetailEditorViewController, UINavigationController;

@interface HUTriggerConditionDetailEditingContext : NSObject

{
    HUTriggerTimeConditionDetailEditorViewController *_viewController;
    UINavigationController *_navigationController;
    HFItem *_optionItem;
}

@property (retain, nonatomic) HUTriggerTimeConditionDetailEditorViewController *viewController;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) HFItem *optionItem;

@end
