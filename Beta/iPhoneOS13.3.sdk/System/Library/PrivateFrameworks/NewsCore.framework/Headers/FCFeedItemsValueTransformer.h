/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSValueTransformer.h>

@interface FCFeedItemsValueTransformer : NSValueTransformer

+ (void)registerIfNeeded;

- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;

@end
