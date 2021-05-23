/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@interface _UIActivityItemMapping : NSObject

+ (id)_activeActivityViewControllers;
+ (id)_subjectForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_dataTypeIdentifierForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_thumbnailImageForActivityItem:(id)arg1 thumbnailSize:(struct CGSize)arg2 activityType:(id)arg3;
+ (id)_attachmentNameForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_thumbnailImageDataForActivityItem:(id)arg1 thumbnailSize:(struct CGSize)arg2 activityType:(id)arg3;
+ (id)_openURLAnnotationForActivityItem:(id)arg1 activityType:(id)arg2;
+ (void)_addActivityItem:(id)arg1 activityViewController:(id)arg2 originalActivityItem:(id)arg3;
+ (void)_removeFromActiveActivityViewControllers:(id)arg1;
+ (void)_clearActivityItems:(id)arg1;
+ (void)_addToActiveActivityViewControllers:(id)arg1;
+ (id)_itemProviderForActivityItem:(id)arg1 typeIdentifier:(id)arg2 thumbnailSize:(struct CGSize)arg3 activityType:(id)arg4;
+ (id)_activityViewControllerForActivityItem:(id)arg1;

@end
