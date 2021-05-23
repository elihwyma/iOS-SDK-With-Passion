/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationVCHierarchyDataContainer : NSObject

{
    UIViewController *_viewController;
    long long _level;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) long long level;

- (id)initWithViewController:(id)arg1 atLevel:(long long)arg2;

@end
