/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface REFeatureTransformerInvalidationContext : NSObject

{
    NSDate *_invalidationDate;
}

@property (nonatomic, readonly) NSDate *invalidationDate;

- (void)invalidateAtDate:(id)arg1;

@end
