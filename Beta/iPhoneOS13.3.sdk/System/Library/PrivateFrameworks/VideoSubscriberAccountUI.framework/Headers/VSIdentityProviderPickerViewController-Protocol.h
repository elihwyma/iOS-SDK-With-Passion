/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/Swift-Protocol.h>

@class NSArray, NSString, UISearchController;

@protocol VSIdentityProviderPickerViewControllerDelegate;

@protocol VSIdentityProviderPickerViewController <Swift>

@property (weak, nonatomic) id <VSIdentityProviderPickerViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property (copy, nonatomic) NSArray *identityProviders;
@property (nonatomic) unsigned long long additionalProvidersMode;
@property (copy, nonatomic) NSString *requestingAppDisplayName;
@property (copy, nonatomic) NSString *resourceTitle;
@property (nonatomic, readonly) UISearchController *searchController;

- (unsigned short)deselectSelectedProviderAnimated: /* Error: Ran out of types for this method. */;

@end
