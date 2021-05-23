/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInterfaceAction.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIAlertAction, _UIAlertControllerActionView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerActionViewInterfaceAction : UIInterfaceAction <Swift>

{
    UIAlertAction *_underlyingAlertAction;
    _Bool _valid;
}

@property (nonatomic, readonly) _UIAlertControllerActionView *alertControllerActionView;
@property (nonatomic, readonly) UIAlertAction *underlyingAlertAction;
@property (nonatomic, readonly) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)actionWithAlertControllerActionView:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (long long)type;
- (long long)_typeForDeterminingViewRepresentation;
- (id)classificationTitle;
- (id)leadingImage;
- (void)_action:(id)arg1 changedToTitle:(id)arg2;
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(id)arg1 changedToEnabled:(_Bool)arg2;
- (void)_action:(id)arg1 changedToChecked:(_Bool)arg2;
- (void)_action:(id)arg1 changedToBePreferred:(_Bool)arg2;
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;
- (void)_initializeStateFromUnderlyingAlertAction;

@end
