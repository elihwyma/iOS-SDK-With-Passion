/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSModalViewControllerBase.h>

@protocol CSResetRestoreStatusProviding;

@interface CSResetRestoreViewController : CSModalViewControllerBase

{
    id <CSResetRestoreStatusProviding> _statusProvider;
}

- (void)viewDidLoad;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)initWithStatusProvider:(id)arg1;
- (id)_currentTextForResetOrRestoreState;

@end
