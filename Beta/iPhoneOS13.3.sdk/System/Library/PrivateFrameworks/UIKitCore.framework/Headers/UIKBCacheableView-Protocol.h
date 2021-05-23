/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@protocol UIKBCacheableView <Swift>

@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) _Bool cacheDeferable;
@property (nonatomic, readonly) double cachedWidth;
@property (nonatomic, readonly) _Bool keepNonPersistent;
@property (nonatomic, readonly) long long cacheDeferPriority;

- (unsigned short)cacheKeysForRenderFlags: /* Error: Ran out of types for this method. */;

@end
