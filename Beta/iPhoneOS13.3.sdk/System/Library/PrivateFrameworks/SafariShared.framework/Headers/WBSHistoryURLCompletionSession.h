/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class WBSHistoryService;

@interface WBSHistoryURLCompletionSession : NSObject

{
    WBSHistoryService *_historyService;
}

- (id)initWithHistoryService:(id)arg1;
- (void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
