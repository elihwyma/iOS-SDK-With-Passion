/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <StorageSettings/STStorageTip.h>

@class NSArray;

@interface STStorageActionTip : STStorageTip

{
    NSArray *_significantItems;
}

@property (nonatomic) Class detailControllerClass;
@property (copy, nonatomic) NSArray *significantItems;

- (id)init;

@end
