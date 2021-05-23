/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMListChangeItem;

@interface REMListSublistContextChangeItem : NSObject

{
    REMListChangeItem *_listChangeItem;
}

@property (retain, nonatomic) REMListChangeItem *listChangeItem;

- (void)addListChangeItem:(id)arg1;
- (void)insertListChangeItem:(id)arg1 beforeListChangeItem:(id)arg2;
- (void)insertListChangeItem:(id)arg1 afterListChangeItem:(id)arg2;
- (id)initWithListChangeItem:(id)arg1;
- (void)_insertListChangeItem:(id)arg1 adjacentToListChangeItem:(id)arg2 isAfter:(_Bool)arg3;

@end
