/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _UICopyConfiguration : NSObject

{
    NSArray *_itemProviders;
    _Bool _allowsSharing;
    id _localObject;
    CDUnknownBlockType _metadataProvider;
    CDUnknownBlockType _previewProvider;
    CDUnknownBlockType _activityItemsProvider;
    CDUnknownBlockType _applicationActivitiesProvider;
}

@property (retain, nonatomic) id localObject;
@property (nonatomic) _Bool allowsSharing;
@property (copy, nonatomic) CDUnknownBlockType metadataProvider;
@property (copy, nonatomic) CDUnknownBlockType previewProvider;
@property (copy, nonatomic) CDUnknownBlockType activityItemsProvider;
@property (copy, nonatomic) CDUnknownBlockType applicationActivitiesProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *itemProvidersForActivityItemsConfiguration;
@property (copy, nonatomic, readonly) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (copy, nonatomic, readonly) NSArray *itemProvidersForSharing;
@property (copy, nonatomic, readonly) NSArray *activityItemsForSharing;
@property (copy, nonatomic, readonly) NSArray *applicationActivitiesForSharing;

+ (id)copyConfigurationWithSharedObjects:(id)arg1;
+ (id)copyConfigurationWithItemProviders:(id)arg1;

- (id)initWithItemProviders:(id)arg1;
- (id)itemProviders;
- (id)initWithSharedObjects:(id)arg1;
- (id)sharingMetadataForKey:(id)arg1;
- (id)previewForSharedItemProviderAtIndex:(long long)arg1 intent:(id)arg2;

@end
