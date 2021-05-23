/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UINavigationController.h>

@class NSMutableDictionary, NSString;

@protocol UINavigationControllerDelegate><UIVideoEditorControllerDelegate;

@interface UIVideoEditorController : UINavigationController

{
    int _previousStatusBarStyle;
    NSMutableDictionary *_properties;
    CDStruct_d1897728 _flags;
}

@property (nonatomic) id <UINavigationControllerDelegate><UIVideoEditorControllerDelegate> delegate;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic) long long videoQuality;

+ (_Bool)canEditVideoAtPath:(id)arg1;

- (id)init;
- (id)_properties;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillUnload;
- (id)_valueForProperty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_initializeProperties;
- (void)_removeAllChildren;
- (void)_autoDismiss;
- (void)_setProperties:(id)arg1;
- (_Bool)_didRevertStatusBar;
- (void)_setupControllers;
- (id)_createInitialController;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)_videoURL;
- (void)_setVideoURL:(id)arg1;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewController:(id)arg1 didFailWithError:(id)arg2;

@end
