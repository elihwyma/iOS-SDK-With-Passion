/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CCUIContentModuleContextDelegate;

@interface CCUIContentModuleContext : NSObject

{
    NSString *_moduleIdentifier;
    id <CCUIContentModuleContextDelegate> _delegate;
}

@property (copy, nonatomic, readonly) NSString *moduleIdentifier;
@property (weak, nonatomic) id <CCUIContentModuleContextDelegate> delegate;

+ (void)initialize;
+ (void)performWithoutAnimationWhileHidden:(CDUnknownBlockType)arg1;
+ (id)_sharedOpenApplicationOptions;
+ (id)_sharedOpenAppService;
+ (_Bool)areAnimationsPermitted;
+ (void)setAnimationsPermitted:(_Bool)arg1;

- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dismissModule;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithModuleIdentifier:(id)arg1;
- (void)requestAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openApplication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enqueueStatusUpdate:(id)arg1;
- (void)setHomeGestureDismissalAllowed:(_Bool)arg1;
- (void)requestExpandModule;
- (void)dismissControlCenter;

@end
