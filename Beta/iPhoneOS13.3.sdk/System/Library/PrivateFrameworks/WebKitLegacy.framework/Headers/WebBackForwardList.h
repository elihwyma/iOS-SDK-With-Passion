/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebBackForwardListPrivate, WebHistoryItem;

@interface WebBackForwardList : NSObject

{
    WebBackForwardListPrivate *_private;
}

@property (nonatomic, readonly) WebHistoryItem *backItem;
@property (nonatomic, readonly) WebHistoryItem *currentItem;
@property (nonatomic, readonly) WebHistoryItem *forwardItem;
@property (nonatomic) int capacity;
@property (nonatomic, readonly) int backListCount;
@property (nonatomic, readonly) int forwardListCount;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)removeItem:(id)arg1;
- (id)dictionaryRepresentation;
- (void)addItem:(id)arg1;
- (void)goBack;
- (void)goForward;
- (void)setToMatchDictionaryRepresentation:(id)arg1;
- (id)itemAtIndex:(int)arg1;
- (void)_close;
- (_Bool)containsItem:(id)arg1;
- (id)initWithBackForwardList:(Ref_8012be98 *)arg1;
- (void)goToItem:(id)arg1;
- (id)backListWithLimit:(int)arg1;
- (id)forwardListWithLimit:(int)arg1;
- (void)setPageCacheSize:(unsigned long long)arg1;
- (unsigned long long)pageCacheSize;

@end
