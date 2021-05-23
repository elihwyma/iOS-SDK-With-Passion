/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIActivityViewController;

@interface UIActivityItemsConfiguration : NSObject <Swift>

{
    NSArray *_itemProviders;
    NSArray *_activityItems;
    UIActivityViewController *_vc;
    NSArray *_excludedActivityTypes;
    id _localObject;
    NSArray *_supportedInteractions;
    CDUnknownBlockType _metadataProvider;
    CDUnknownBlockType _perItemMetadataProvider;
    CDUnknownBlockType _previewProvider;
    CDUnknownBlockType _applicationActivitiesProvider;
}

@property (nonatomic, readonly) _Bool _hasItemsForActivityItemsConfiguration;
@property (copy, nonatomic, readonly) NSArray *_activityItems;
@property (copy, nonatomic, setter=_setExcludedActivityTypes:) NSArray *_excludedActivityTypes;
@property (retain, nonatomic) id localObject;
@property (copy, nonatomic) NSArray *supportedInteractions;
@property (copy, nonatomic) CDUnknownBlockType metadataProvider;
@property (copy, nonatomic) CDUnknownBlockType perItemMetadataProvider;
@property (copy, nonatomic) CDUnknownBlockType previewProvider;
@property (copy, nonatomic) CDUnknownBlockType applicationActivitiesProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *itemProvidersForActivityItemsConfiguration;
@property (copy, nonatomic, readonly) NSArray *applicationActivitiesForActivityItemsConfiguration;

+ (id)activityItemsConfigurationWithObjects:(id)arg1;
+ (id)activityItemsConfigurationWithItemProviders:(id)arg1;
+ (id)_itemsForSystemSharingFromActivityItemsConfiguration:(id)arg1 wrapperBlock:(CDUnknownBlockType)arg2;

- (id)initWithObjects:(id)arg1;
- (void)_commonInit;
- (id)initWithItemProviders:(id)arg1;
- (id)activityItemsConfigurationMetadataForKey:(id)arg1;
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(id)arg2;
- (_Bool)activityItemsConfigurationSupportsInteraction:(id)arg1;
- (id)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)_initWithActivityItemSources:(id)arg1;
- (id)_initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)itemProviders;
- (id)activityItemsForSharing;

@end
