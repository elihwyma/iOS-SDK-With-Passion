/*
 Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import <AXRuntime/AXUIElement.h>

#import <AXRuntime/Swift-Protocol.h>

@class NSMutableDictionary;

@interface AXUIMockElement : AXUIElement <Swift>

{
    NSMutableDictionary *_writableAttributes;
    NSMutableDictionary *_performActionLog;
    _Bool _usesCarriageReturnAsLinesSeparator;
    NSMutableDictionary *_attributes;
    CDUnknownBlockType _handleActionBlock;
    CDUnknownBlockType _cacheUpdatedCallback;
}

@property (retain, nonatomic) NSMutableDictionary *attributes;
@property (nonatomic) _Bool usesCarriageReturnAsLinesSeparator;
@property (copy, nonatomic) CDUnknownBlockType handleActionBlock;
@property (copy, nonatomic) CDUnknownBlockType cacheUpdatedCallback;

+ (void)applyElementAttributeCacheScheme:(unsigned long long)arg1;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (int)pid;
- (_Bool)performAXAction:(int)arg1;
- (void)setValue:(id)arg1 forAXAttribute:(long long)arg2;
- (void)startLoggingActions;
- (id)endLoggingActions;
- (id)stringWithAXAttribute:(long long)arg1;
- (struct CGRect)rectWithAXAttribute:(long long)arg1;
- (id)numberWithAXAttribute:(long long)arg1;
- (struct CGPoint)pointWithAXAttribute:(long long)arg1;
- (id)_valueForAttribute:(long long)arg1;
- (struct _NSRange)rangeWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void *)arg2;
- (id)objectWithAXAttribute:(long long)arg1;
- (unsigned long long)_lineNumberForPoint:(struct CGPoint)arg1;
- (_Bool)canSetAXAttribute:(long long)arg1;
- (_Bool)isMockElement;
- (struct __AXUIElement *)axElement;
- (id)visibleElements;
- (id)performBlockWhileLoggingPerformedActions:(CDUnknownBlockType)arg1;
- (void)enableCache:(_Bool)arg1;
- (void)disableCache;
- (void)setWritable:(_Bool)arg1 forAXAttribute:(long long)arg2;
- (id)uiElementWithAXAttribute:(long long)arg1;
- (_Bool)canPerformAXAction:(int)arg1;
- (void)setValue:(id)arg1 forAXParameterizedAttribute:(long long)arg2;
- (id)arrayWithAXAttribute:(long long)arg1;
- (_Bool)boolWithAXAttribute:(long long)arg1;
- (float)floatWithAXAttribute:(long long)arg1;
- (long long)longWithAXAttribute:(long long)arg1;
- (struct CGSize)sizeWithAXAttribute:(long long)arg1;
- (struct CGPath *)pathWithAXAttribute:(long long)arg1;
- (id)urlWithAXAttribute:(long long)arg1;
- (id)uiElementArrayForAXAttribute:(long long)arg1;
- (unsigned long long)arrayCountWithAXAttribute:(long long)arg1;
- (void)fillStaticCache;
- (id)cachedAttributes;
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
- (struct CGPoint)pointForLineNumber:(unsigned long long)arg1;

@end
