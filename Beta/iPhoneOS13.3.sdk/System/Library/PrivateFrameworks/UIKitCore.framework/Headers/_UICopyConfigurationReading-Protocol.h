/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray;

@protocol _UICopyConfigurationReading <Swift>

@property (nonatomic, readonly) _Bool allowsSharing;
@property (copy, nonatomic, readonly) NSArray *itemProvidersForSharing;
@property (copy, nonatomic, readonly) NSArray *activityItemsForSharing;
@property (copy, nonatomic, readonly) NSArray *applicationActivitiesForSharing;

- (unsigned short)sharingMetadataForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)previewForSharedItemProviderAtIndex:intent: /* Error: Ran out of types for this method. */;

@end
