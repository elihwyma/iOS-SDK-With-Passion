/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <StorageSettings/STStorageTableCell.h>

@interface STStorageAppCell : STStorageTableCell

+ (id)specifierForAppIdentifier:(id)arg1;
+ (id)specifierForStorageApp:(id)arg1;
+ (id)specifierForAppProxy:(id)arg1;
+ (id)specifierForAppBundleURL:(id)arg1;

- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
