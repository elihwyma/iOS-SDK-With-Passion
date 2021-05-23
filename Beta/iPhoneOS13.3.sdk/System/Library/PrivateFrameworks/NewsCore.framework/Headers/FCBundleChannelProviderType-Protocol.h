/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@class NSArray;

@protocol FCBundleChannelProviderDelegate;

@protocol FCBundleChannelProviderType

@property (nonatomic, readonly) NSArray *bundleChannelIDs;
@property (weak, nonatomic) id <FCBundleChannelProviderDelegate> delegate;

- (unsigned short)loadInitialBundleChannelIDsWithCompletion: /* Error: Ran out of types for this method. */;

@end
