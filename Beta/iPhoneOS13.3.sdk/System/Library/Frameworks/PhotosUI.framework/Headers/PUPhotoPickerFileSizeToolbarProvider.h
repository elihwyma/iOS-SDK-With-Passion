/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet, NSString, PUPhotoPickerResizeTaskDescriptor, UIBarButtonItem, UILabel, UITableViewController;

@protocol PUPhotoPickerFileSizeToolbarProviderDelegate, PUPhotosGridViewSupplementalToolbarDataSource;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerFileSizeToolbarProvider : NSObject

{
    id <PUPhotosGridViewSupplementalToolbarDataSource> _dataSource;
    UIBarButtonItem *_sizePickerItem;
    UILabel *_sizePickerDescriptionLabel;
    UITableViewController *_sizePickerViewController;
    _Bool _preparingToPresentSizePickerViewController;
    NSArray *_toolbarItems;
    NSArray *_resizeTaskDescriptors;
    NSSet *_cachedAssetSet;
    PUPhotoPickerResizeTaskDescriptor *_selectedTaskDescriptor;
    NSMutableDictionary *_taskDescriptorsToCachedLabels;
    id <PUPhotoPickerFileSizeToolbarProviderDelegate> _delegate;
}

@property (weak, nonatomic) id <PUPhotoPickerFileSizeToolbarProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool shouldShowToolbar;
@property (copy, nonatomic, readonly) NSArray *toolbarItems;

- (id)initWithDataSource:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_sizePickerItem;
- (id)_orderedResizeTaskDescriptors;
- (id)_orderedResizeTaskDescriptorsForCurrentlySelectedAssets;
- (void)_presentSizePicker:(id)arg1;
- (id)_localizedLabelForResizeTaskDescriptor:(id)arg1;
- (void)_updateSizePickerItemIfNeeded;
- (void)_updateTableViewSelection;
- (id)_computeSelectedIndexPath;

@end
