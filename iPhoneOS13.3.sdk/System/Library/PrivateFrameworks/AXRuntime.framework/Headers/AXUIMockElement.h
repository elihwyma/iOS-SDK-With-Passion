//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXRuntime/AXUIElement.h>


@class NSMutableDictionary;

@interface AXUIMockElement : AXUIElement <NSCopying>
{
    NSMutableDictionary *_writableAttributes;
    NSMutableDictionary *_performActionLog;
    BOOL _usesCarriageReturnAsLinesSeparator;
    NSMutableDictionary *_attributes;
    id /* CDUnknownBlockType */ _handleActionBlock;
    id /* CDUnknownBlockType */ _cacheUpdatedCallback;
}

+ (id)uiElementAtCoordinate:(CGPoint)arg1;
+ (void)applyElementAttributeCacheScheme:(NSUInteger)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cacheUpdatedCallback; // @synthesize cacheUpdatedCallback=_cacheUpdatedCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handleActionBlock; // @synthesize handleActionBlock=_handleActionBlock;
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) BOOL usesCarriageReturnAsLinesSeparator; // @synthesize usesCarriageReturnAsLinesSeparator=_usesCarriageReturnAsLinesSeparator;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (NSUInteger)_lineNumberForPoint:(CGPoint)arg1;
- (CGPoint)pointForLineNumber:(NSUInteger)arg1;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(BOOL)arg3;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withRange:(NSRange)arg2;
- (void)setAXAttribute:(long long)arg1 withSize:(CGSize)arg2;
- (void)setAXAttribute:(long long)arg1 withPoint:(CGPoint)arg2;
- (void)setAXAttribute:(long long)arg1 withNumber:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(long long)arg1 withString:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withBOOL:(BOOL)arg2;
- (void)updateCache:(long long)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (int)pid;
- (BOOL)isValidForApplication:(id)arg1;
- (BOOL)isValid;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void )arg2 fetchAttributes:(BOOL)arg3;
- (id)nextElementsWithCount:(NSUInteger)arg1;
- (id)previousElementsWithCount:(NSUInteger)arg1;
- (BOOL)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (BOOL)performAXAction:(int)arg1 withValue:(id)arg2;
- (BOOL)performAXAction:(int)arg1;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void )arg2;
- (id)uiElementsWithAttribute:(long long)arg1;
- (id)cachedAttributes;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void )arg2;
- (void)fillStaticCache;
- (NSUInteger)arrayCountWithAXAttribute:(long long)arg1;
- (id)uiElementArrayForAXAttribute:(long long)arg1;
- (id)urlWithAXAttribute:(long long)arg1;
- (CGRect)rectWithAXAttribute:(long long)arg1;
- (CGPath )pathWithAXAttribute:(long long)arg1;
- (NSRange)rangeWithAXAttribute:(long long)arg1;
- (CGSize)sizeWithAXAttribute:(long long)arg1;
- (CGPoint)pointWithAXAttribute:(long long)arg1;
- (id)numberWithAXAttribute:(long long)arg1;
- (long long)longWithAXAttribute:(long long)arg1;
- (float)floatWithAXAttribute:(long long)arg1;
- (BOOL)boolWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1;
- (id)stringWithAXAttribute:(long long)arg1;
- (id)arrayWithAXAttribute:(long long)arg1;
- (void)setValue:(id)arg1 forAXParameterizedAttribute:(long long)arg2;
- (void)setValue:(id)arg1 forAXAttribute:(long long)arg2;
- (BOOL)canPerformAXAction:(int)arg1;
- (id)uiElementWithAXAttribute:(long long)arg1;
- (BOOL)canSetAXAttribute:(long long)arg1;
- (void)setWritable:(BOOL)arg1 forAXAttribute:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)disableCache;
- (void)enableCache:(BOOL)arg1;
- (id)_valueForAttribute:(long long)arg1;
- (id)description;
- (id)performBlockWhileLoggingPerformedActions:(id /* CDUnknownBlockType */)arg1;
- (id)endLoggingActions;
- (void)startLoggingActions;
- (id)visibleElements;
- (struct __AXUIElement )axElement;
- (BOOL)isMockElement;
- (id)init;
// - (id)copyWithZone:(_NSZone )arg1;

@end

