/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVLockupFactory : NSObject

+ (struct TVCellMetrics)cellMetricsForCollectionElement:(id)arg1;
+ (void)updateViewLayoutForCell:(id)arg1 forSize:(struct CGSize)arg2;
+ (void)_configureCell:(id)arg1 layout:(id)arg2 element:(id)arg3;
+ (void)_configureStackingPoster:(id)arg1 layout:(id)arg2 element:(id)arg3 forMetrics:(_Bool)arg4;
+ (id)_configurationIdentifierForElement:(id)arg1;
+ (struct UIEdgeInsets)_customCellPaddingForCellMetrics:(struct TVCellMetrics)arg1 withCollectionCellMetrics:(struct TVCellMetrics)arg2 contentAlignment:(long long)arg3;

- (id)init;
- (void)_registerLockup;

@end
