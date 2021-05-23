/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIDebuggingOverlayDetail : NSObject

{
    NSString *_title;
    NSString *_detail;
    long long _accessoryType;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *detail;
@property (nonatomic) long long accessoryType;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)detailWithTitle:(id)arg1 detail:(id)arg2;

- (void)_updateForInspectedView:(id)arg1;

@end
