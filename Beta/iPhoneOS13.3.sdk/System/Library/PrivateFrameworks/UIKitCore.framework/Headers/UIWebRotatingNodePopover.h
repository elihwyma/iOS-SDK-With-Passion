/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class DOMNode, NSString, UIPopoverController;

@protocol UIWebRotatingNodePopoverDelegate;

__attribute__((visibility("hidden")))
@interface UIWebRotatingNodePopover : NSObject

{
    _Bool _isRotating;
    DOMNode *_node;
    struct CGPoint _presentationPoint;
    UIPopoverController *_popoverController;
    id <UIWebRotatingNodePopoverDelegate> _dismissDelegate;
}

@property (retain, nonatomic) DOMNode *node;
@property (nonatomic) struct CGPoint presentationPoint;
@property (retain, nonatomic) UIPopoverController *popoverController;
@property (nonatomic) id <UIWebRotatingNodePopoverDelegate> dismissDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (id)initWithDOMNode:(id)arg1;
- (void)presentPopoverAnimated:(_Bool)arg1;
- (unsigned long long)popoverArrowDirections;
- (void)willRotate:(id)arg1;
- (void)didRotate:(id)arg1;

@end
