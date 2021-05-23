/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMAccountChangeItem;

@interface REMAccountGroupContextChangeItem : NSObject

{
    REMAccountChangeItem *_accountChangeItem;
}

@property (retain, nonatomic) REMAccountChangeItem *accountChangeItem;

- (id)initWithAccountChangeItem:(id)arg1;

@end
