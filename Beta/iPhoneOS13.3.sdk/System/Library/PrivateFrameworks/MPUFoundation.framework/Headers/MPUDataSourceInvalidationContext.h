/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@interface MPUDataSourceInvalidationContext : NSObject

{
    _Bool _invalidateEverything;
    _Bool _invalidateDataSourceCounts;
}

@property (nonatomic, readonly) _Bool invalidateEverything;
@property (nonatomic, readonly) _Bool invalidateDataSourceCounts;

- (void)setInvalidateEverything:(_Bool)arg1;
- (void)setInvalidateDataSourceCounts:(_Bool)arg1;

@end
