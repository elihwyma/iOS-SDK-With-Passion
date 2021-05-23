/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class CSSearchQuery;

@interface WBSSiriIntelligenceHistorySearch : NSObject

{
    CSSearchQuery *_searchQuery;
}

- (void)dealloc;
- (void)findURLStringsForHistoryItemsContainingString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
