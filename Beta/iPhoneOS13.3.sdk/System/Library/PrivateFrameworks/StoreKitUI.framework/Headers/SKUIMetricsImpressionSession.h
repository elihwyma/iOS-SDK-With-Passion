/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSMutableString, NSString;

@interface SKUIMetricsImpressionSession : NSObject

{
    NSMutableArray *_impressionIdentifiers;
    NSMutableString *_impressionsString;
    NSMutableOrderedSet *_impressionableViewElements;
    NSMapTable *_impressionableViewElementsTimerMap;
}

@property (copy, nonatomic, readonly) NSArray *impressionIdentifiers;
@property (copy, nonatomic, readonly) NSString *impressionsString;
@property (copy, nonatomic, readonly) NSArray *impressionableViewElements;

- (id)init;
- (void)beginActiveImpressionForViewElement:(id)arg1;
- (void)endAllPendingActiveImpression;
- (void)endActiveImpressionForViewElement:(id)arg1;
- (void)addItemViewElement:(id)arg1;
- (void)addItemIdentifier:(long long)arg1;
- (id)_getTimerForViewElement:(id)arg1;
- (void)_clearTimerForViewElement:(id)arg1;
- (void)_setTimer:(id)arg1 forViewElement:(id)arg2;
- (id)_allViewElementsInTimerMap;

@end
