/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UINavigationController.h>

@class OBPrivacyPresenter, VTUIDictationDataSharingOptInPresenter;

@protocol _UIDictationPrivacySheetControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIDictationPrivacySheetController : UINavigationController

{
    id <_UIDictationPrivacySheetControllerDelegate> _privacyDelegate;
    OBPrivacyPresenter *_privacyPresenter;
    long long _sheetType;
    VTUIDictationDataSharingOptInPresenter *_dataSharingOptInPresenter;
}

@property (nonatomic) id <_UIDictationPrivacySheetControllerDelegate> privacyDelegate;
@property (retain, nonatomic) OBPrivacyPresenter *privacyPresenter;
@property (nonatomic) long long sheetType;
@property (retain, nonatomic) VTUIDictationDataSharingOptInPresenter *dataSharingOptInPresenter;

- (void)dealloc;
- (id)initWithType:(long long)arg1;
- (void)dismiss;
- (_Bool)_canShowWhileLocked;
- (void)setPresentationDelegate:(id)arg1;

@end
