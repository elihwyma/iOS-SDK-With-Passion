/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem

{
    NSMutableSet *_responses;
    NSMutableSet *_successfulICS;
    NSMutableSet *_failedResponseItems;
}

@property (retain, nonatomic) NSMutableSet *responses;
@property (retain, nonatomic) NSMutableSet *successfulICS;
@property (retain, nonatomic) NSMutableSet *failedResponseItems;

- (id)description;
- (id)copyParseRules;
- (void)addNewTopLevelItem:(id)arg1;

@end
