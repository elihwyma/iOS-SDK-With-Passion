/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIPopoverController, WKContentView;

@protocol WKRotatingPopoverDelegate;

__attribute__((visibility("hidden")))
@interface WKRotatingPopover : NSObject

{
    WKContentView *_view;
    _Bool _isRotating;
    struct CGPoint _presentationPoint;
    struct RetainPtr<UIPopoverController> _popoverController;
    id <WKRotatingPopoverDelegate> _dismissionDelegate;
}

@property (nonatomic, readonly) WKContentView *view;
@property (nonatomic) struct CGPoint presentationPoint;
@property (retain, nonatomic) UIPopoverController *popoverController;
@property (nonatomic) id <WKRotatingPopoverDelegate> dismissionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (id)initWithView:(id)arg1;
- (void)presentPopoverAnimated:(_Bool)arg1;
- (unsigned long long)popoverArrowDirections;
- (void)willRotate:(id)arg1;
- (void)didRotate:(id)arg1;

@end
