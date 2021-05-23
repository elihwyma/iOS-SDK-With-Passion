/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIProductPageProductInfo : NSObject

{
    NSMutableArray *_labels;
    NSMutableArray *_values;
}

@property (nonatomic, readonly) long long numberOfEntries;

- (void)enumerateEntriesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithInfoSectionDictionaries:(id)arg1;

@end
