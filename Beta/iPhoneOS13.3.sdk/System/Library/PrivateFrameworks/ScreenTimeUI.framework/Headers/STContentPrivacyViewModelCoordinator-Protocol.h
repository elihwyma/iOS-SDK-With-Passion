/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/Swift-Protocol.h>

@class STContentPrivacyViewModel;

@protocol STContentPrivacyViewModelCoordinator <Swift>

@property (nonatomic, readonly) STContentPrivacyViewModel *viewModel;

- (unsigned short)saveCommunicationLimits:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveRestrictionValue:forItem:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveContentPrivacyEnabled:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveValuesForRestrictions:completionHandler: /* Error: Ran out of types for this method. */;

@end
