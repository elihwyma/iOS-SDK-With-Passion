/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <WatchKit/WKInterfaceObject.h>

@class CAContext, UIView;

@interface WKInterfaceHMCamera : WKInterfaceObject

{
    UIView *_containerView;
    UIView *_cameraView;
    CAContext *_context;
    struct CGSize _containerViewSize;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *cameraView;
@property (retain, nonatomic) CAContext *context;
@property (nonatomic) struct CGSize containerViewSize;

- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5;
- (void)setCameraSource:(id)arg1;
- (void)updateContainerViewSize;
- (void)remoteSetWidth:(double)arg1;
- (void)remoteSetHeight:(double)arg1;

@end
