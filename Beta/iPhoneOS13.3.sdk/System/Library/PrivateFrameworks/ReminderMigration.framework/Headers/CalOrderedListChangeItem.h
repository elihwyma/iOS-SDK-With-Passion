/*
 Image: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
 */

#import <Foundation/NSObject.h>

@class REMListChangeItem;

__attribute__((visibility("hidden")))
@interface CalOrderedListChangeItem : NSObject

{
    REMListChangeItem *_listChangeItem;
    long long _order;
}

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (nonatomic) long long order;

@end
