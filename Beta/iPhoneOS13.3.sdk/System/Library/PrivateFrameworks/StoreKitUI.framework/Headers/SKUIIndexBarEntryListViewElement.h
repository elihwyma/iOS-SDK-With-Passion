/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarEntryListViewElement : SKUIViewElement

{
    _Bool _indexBarHiddenWhenEmpty;
    long long _entryListElementType;
    long long _minimumEntityCount;
    NSString *_targetIndexBarEntryID;
}

@property (copy, nonatomic, readonly) NSArray *childIndexBarEntryElements;
@property (nonatomic, readonly) long long entryListElementType;
@property (nonatomic, readonly, getter=isIndexBarHiddenWhenEmpty) _Bool indexBarHiddenWhenEmpty;
@property (nonatomic, readonly) long long minimumEntityCount;
@property (copy, nonatomic, readonly) NSString *targetIndexBarEntryID;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;

@end
