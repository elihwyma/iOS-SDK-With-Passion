/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMList;

@interface REMListSublistContext : NSObject

{
    REMList *_list;
}

@property (retain, nonatomic) REMList *list;

- (id)initWithList:(id)arg1;
- (id)fetchListsWithError:(id *)arg1;

@end
