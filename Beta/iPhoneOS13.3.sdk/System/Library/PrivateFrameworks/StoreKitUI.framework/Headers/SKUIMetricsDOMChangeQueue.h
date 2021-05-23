/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIMetricsDOMChangeQueue : NSObject

{
    NSMutableArray *_storage;
}

@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)addPendingChange:(id)arg1;
- (id)oldestPendingChange;

@end
