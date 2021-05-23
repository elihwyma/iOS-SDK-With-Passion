/*
 Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import <Foundation/NSObject.h>

#import <AXRuntime/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@interface AXUIElement : NSObject <Swift>

{
    struct __AXUIElement *_axElement;
    long long _cachedRefCount;
    NSMutableDictionary *_cachedAttributes;
    _Bool _isValid;
}

@property (nonatomic, readonly) struct __AXUIElement *axElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSMutableDictionary *cachedAttributes;

+ (void)initialize;
+ (void)applyElementAttributeCacheScheme:(unsigned long long)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 forApplication:(struct __AXUIElement *)arg2 contextId:(unsigned int)arg3;
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1 cache:(id)arg2;
+ (struct __AXUIElement *)systemWideAXUIElement;
+ (id)uiSystemWideApplication;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 startWithElement:(id)arg2;
+ (id)uiApplicationAtCoordinate:(struct CGPoint)arg1;
+ (id)uiApplicationForContext:(unsigned int)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_invalidate;
- (_Bool)isValid;
- (int)pid;
- (struct _NSRange)_selectedTextRange;
- (_Bool)performAXAction:(int)arg1;
- (id)stringWithAXAttribute:(long long)arg1;
- (struct CGRect)rectWithAXAttribute:(long long)arg1;
- (id)numberWithAXAttribute:(long long)arg1;
- (struct CGPoint)pointWithAXAttribute:(long long)arg1;
- (struct _NSRange)rangeWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void *)arg2;
- (id)objectWithAXAttribute:(long long)arg1;
- (_Bool)isMockElement;
- (void)enableCache:(_Bool)arg1;
- (void)disableCache;
- (_Bool)canPerformAXAction:(int)arg1;
- (id)arrayWithAXAttribute:(long long)arg1;
- (_Bool)boolWithAXAttribute:(long long)arg1;
- (struct CGPath *)pathWithAXAttribute:(long long)arg1;
- (id)uiElementsWithAttribute:(long long)arg1;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (id)previousElementsWithCount:(unsigned long long)arg1;
- (id)nextElementsWithCount:(unsigned long long)arg1;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void *)arg2 fetchAttributes:(_Bool)arg3;
- (_Bool)isValidForApplication:(id)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (void)updateCache:(long long)arg1;
- (void)setAXAttribute:(long long)arg1 withBOOL:(_Bool)arg2;
- (void)setAXAttribute:(long long)arg1 withString:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long long)arg1 withNumber:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(_Bool)arg3;
- (id)nextElementsIncludingPrefetchedAttributesWithCount:(unsigned long long)arg1;
- (id)initWithAXElement:(struct __AXUIElement *)arg1 cache:(id)arg2;
- (id)initWithAXElement:(struct __AXUIElement *)arg1;
- (void)setCachedAttributes:(id)arg1;
- (void)_createCache:(_Bool)arg1;
- (id)valueArrayWithAXAttributes:(struct __CFArray *)arg1;
- (void)_setCachedValue:(void *)arg1 forAttribute:(long long)arg2;
- (void *)_cachedValueForAttribute:(long long)arg1;
- (id)_elementsWithParameter:(long long)arg1 count:(unsigned long long)arg2 prefetchAttributes:(_Bool)arg3;
- (id)_objectForRange:(struct _NSRange)arg1 withParameterizedAttribute:(long long)arg2;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3 currentCursorRange:(struct _NSRange)arg4;
- (id)_attributedValueForRange:(struct _NSRange)arg1;
- (id)_valueForRange:(struct _NSRange)arg1;
- (long long)_lineEndPosition;
- (struct _NSRange)_lineRangeForPosition:(unsigned long long)arg1;
- (long long)_lineStartPosition;
- (struct CGColor *)colorWithAXAttribute:(long long)arg1;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3;
- (void)setAXElement:(struct __AXUIElement *)arg1;
- (void *)modifyStaticCacheValue:(void *)arg1;
- (id)_outputCache;

@end
