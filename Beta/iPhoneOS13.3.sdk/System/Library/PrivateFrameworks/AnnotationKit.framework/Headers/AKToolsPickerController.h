/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKController, UINavigationController, UIViewController;

@interface AKToolsPickerController : NSObject

{
    AKController *_controller;
    UINavigationController *_navController;
    UIViewController *_toolsListController;
}

@property (retain, nonatomic) UINavigationController *navController;
@property (retain, nonatomic) UIViewController *toolsListController;
@property (weak) AKController *controller;

- (id)initWithController:(id)arg1;

@end
