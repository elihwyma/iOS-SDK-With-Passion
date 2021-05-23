/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSArray, WebHistoryPrivate;

@interface WebHistory : NSObject

{
    WebHistoryPrivate *_historyPrivate;
}

@property (copy, nonatomic, readonly) NSArray *orderedLastVisitedDays;
@property (nonatomic) int historyItemLimit;
@property (nonatomic) int historyAgeInDaysLimit;

+ (id)optionalSharedHistory;
+ (void)setOptionalSharedHistory:(id)arg1;
+ (void)_setVisitedLinkTrackingEnabled:(_Bool)arg1;
+ (void)_removeAllVisitedLinks;

- (id)init;
- (void)dealloc;
- (id)_data;
- (void)removeAllItems;
- (void)addItems:(id)arg1;
- (_Bool)loadFromURL:(id)arg1 error:(id *)arg2;
- (void)timeZoneChanged:(id)arg1;
- (void)_visitedURL:(id)arg1 withTitle:(id)arg2 method:(id)arg3 wasFailure:(_Bool)arg4;
- (id)_itemForURLString:(id)arg1;
- (id)itemForURL:(id)arg1;
- (void)_sendNotification:(id)arg1 entries:(id)arg2;
- (void)removeItems:(id)arg1;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (_Bool)containsURL:(id)arg1;
- (id)allItems;
- (_Bool)saveToURL:(id)arg1 error:(id *)arg2;
- (void)_addVisitedLinksToVisitedLinkStore:(struct WebVisitedLinkStore *)arg1;

@end
