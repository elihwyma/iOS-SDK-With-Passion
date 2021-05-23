/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <CoverSheet/Swift-Protocol.h>

@class CSUserPictureView, NSString, UMUser;

@interface CSUserPictureViewController : CSCoverSheetViewControllerBase <Swift>

{
    UMUser *_user;
    CSUserPictureView *_userPictureView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)viewClass;
+ (_Bool)isUserPictureSupported;

- (id)view;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)presentationStyle;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationType;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;

@end
