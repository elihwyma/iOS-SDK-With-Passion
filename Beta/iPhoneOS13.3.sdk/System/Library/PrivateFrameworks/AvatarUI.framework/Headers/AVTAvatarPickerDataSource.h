/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarRecordDataSource, AVTUIEnvironment, NSArray;

@protocol AVTAvatarListItem, AVTAvatarStore;

@interface AVTAvatarPickerDataSource : NSObject

{
    _Bool _allowAddItem;
    AVTUIEnvironment *_environment;
    AVTAvatarRecordDataSource *_recordDataSource;
    NSArray *_items;
    id <AVTAvatarListItem> _addItem;
}

@property (retain, nonatomic) NSArray *items;
@property (nonatomic) _Bool allowAddItem;
@property (retain, nonatomic) id <AVTAvatarListItem> addItem;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) id <AVTAvatarStore> store;
@property (nonatomic, readonly) AVTAvatarRecordDataSource *recordDataSource;

- (long long)numberOfItems;
- (id)itemAtIndex:(long long)arg1;
- (_Bool)canCreateMemoji;
- (id)initWithRecordDataSource:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;
- (void)reloadModel;
- (_Bool)isItemAtIndexAddItem:(long long)arg1;
- (long long)indexOfAddItem;

@end
