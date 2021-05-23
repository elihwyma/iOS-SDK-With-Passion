/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UITapGestureRecognizer, UIWindow;

@interface PXDiagnosticsController : NSObject

{
    UIWindow *__window;
    NSArray *__diagnosticsServicesClasses;
    UITapGestureRecognizer *__gestureRecognizer;
}

@property (nonatomic, readonly) UIWindow *_window;
@property (nonatomic, readonly) NSArray *_diagnosticsServicesClasses;
@property (retain, nonatomic, setter=_setGestureRecognizer:) UITapGestureRecognizer *_gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)setupOnInternalDevicesWithWindow:(id)arg1;
- (id)currentItemProviders;
- (id)servicesWithItemProviders:(id)arg1;
- (id)consoleDescriptionForServices:(id)arg1;
- (void)presentContextualViewControllerForServices:(id)arg1;
- (void)_loadDiagnosticsServicesClasses;
- (void)_updateGestureRecognizer;
- (void)presentContextualDiagnostics;
- (void)_presentContextualViewControllerFromPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)_currentRootViewController;
- (void)_executeService:(id)arg1;

@end
