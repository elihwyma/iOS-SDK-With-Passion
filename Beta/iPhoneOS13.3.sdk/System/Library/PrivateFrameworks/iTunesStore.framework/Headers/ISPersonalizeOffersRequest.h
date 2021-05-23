/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSNumber;

@interface ISPersonalizeOffersRequest : NSObject

{
    NSNumber *_accountIdentifier;
    NSMutableDictionary *_itemIDsByType;
}

@property (retain, nonatomic) NSNumber *accountIdentifier;
@property (nonatomic, readonly) NSArray *allItemTypes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItems:(id)arg1;
- (void)addItemIdentifier:(id)arg1 forItemType:(id)arg2;
- (id)itemIdentifiersForItemType:(id)arg1;

@end
