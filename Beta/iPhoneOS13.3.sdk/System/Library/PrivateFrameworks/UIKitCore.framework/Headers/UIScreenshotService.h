/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIScene, UIWindowScene;

@protocol UIScreenshotServiceDelegate;

@interface UIScreenshotService : NSObject

{
    UIScene *_scene;
    id <UIScreenshotServiceDelegate> _delegate;
    id <UIScreenshotServiceDelegate> _privateDelegate;
}

@property (weak, nonatomic) id <UIScreenshotServiceDelegate> privateDelegate;
@property (weak, nonatomic) id <UIScreenshotServiceDelegate> delegate;
@property (weak, nonatomic, readonly) UIWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

- (id)initWithScene:(id)arg1;

@end
