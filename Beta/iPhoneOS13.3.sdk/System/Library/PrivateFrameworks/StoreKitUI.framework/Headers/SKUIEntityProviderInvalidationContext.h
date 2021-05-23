/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@interface SKUIEntityProviderInvalidationContext : NSObject

{
    _Bool _invalidateEverything;
    _Bool _invalidateDataSourceCounts;
}

@property (nonatomic, readonly) _Bool invalidateEverything;
@property (nonatomic, readonly) _Bool invalidateDataSourceCounts;

- (void)setInvalidateEverything:(_Bool)arg1;
- (void)setInvalidateDataSourceCounts:(_Bool)arg1;

@end
