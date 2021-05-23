/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSHistorySession.h>

@class NSArray;

@interface WBSHistorySessionWithItems : WBSHistorySession

{
    NSArray *_items;
}

@property (copy, nonatomic, readonly) NSArray *items;

- (id)init;
- (id)initWithSessionStartDate:(id)arg1;
- (id)initWithSessionStartDate:(id)arg1 items:(id)arg2;

@end
