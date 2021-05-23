/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class MPUTextDrawingCacheKey, NSCache, NSDictionary, NSHashTable, NSOperationQueue, NSStringDrawingContext;

@interface MPUTextDrawingCache : NSObject

{
    NSCache *_cache;
    NSStringDrawingContext *_reusableStringDrawingContext;
    MPUTextDrawingCacheKey *_reusableTextDrawingCacheKey;
    NSHashTable *_invalidationObservers;
    unsigned long long _invalidationNotificationCoalescingRequestsCount;
    _Bool _wasInvalidatedWithoutNotifyingObservers;
    NSOperationQueue *_preHeatingOperationQueue;
    _Bool _opaque;
    _Bool _usesImageCachingInsteadOfStringDrawingContextCaching;
    NSDictionary *_textAttributes;
    unsigned long long _maximumNumberOfLines;
    double _displayScale;
    CDUnknownBlockType _attributedTextProvider;
}

@property (nonatomic, getter=_isOpaque, setter=_setOpaque:) _Bool opaque;
@property (nonatomic, getter=_usesImageCachingInsteadOfStringDrawingContextCaching, setter=_setUsesImageCachingInsteadOfStringDrawingContextCaching:) _Bool usesImageCachingInsteadOfStringDrawingContextCaching;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) double displayScale;
@property (copy, nonatomic) CDUnknownBlockType attributedTextProvider;

+ (void)_updateStringDrawingContext:(id)arg1 withMaximumNumberOfLines:(unsigned long long)arg2;
+ (id)_drawingContextForText:(id)arg1 allowedSize:(struct CGSize)arg2 fromCache:(id)arg3 usingReusableStringDrawingContext:(id)arg4 reusableTextDrawingCacheKey:(id)arg5 textAttributes:(id)arg6 maximumNumberOfLines:(unsigned long long)arg7 opaque:(_Bool)arg8 displayScale:(double)arg9 attributedTextProvider:(CDUnknownBlockType)arg10;
+ (struct CGSize)_validateAllowedSize:(struct CGSize)arg1;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)addInvalidationObserver:(id)arg1;
- (void)removeInvalidationObserver:(id)arg1;
- (void)_notifyInvalidationObservers;
- (id)drawingContextForText:(id)arg1 allowedSize:(struct CGSize)arg2;
- (void)beginCoalescingInvalidationNotifications;
- (void)endCoalescingInvalidationNotifications;
- (void)preHeatForStrings:(id)arg1 allowedSize:(struct CGSize)arg2;

@end
