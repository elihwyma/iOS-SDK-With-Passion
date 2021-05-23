/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCodableAttribute, NSArray, NSNumber, NSString;

@interface INIntentSlotDescription : NSObject <Swift>

{
    _Bool _isExtended;
    _Bool _isPrivate;
    Class _resolutionResultClass;
    NSString *_name;
    unsigned long long _tag;
    NSString *_facadePropertyName;
    NSString *_dataPropertyName;
    long long _valueType;
    long long _valueStyle;
    NSArray *_resolveSelectorStrings;
    NSArray *_provideOptionsSelectorStrings;
    NSArray *_defaultValueSelectorStrings;
    INCodableAttribute *_codableAttribute;
    NSNumber *_rank;
}

@property (nonatomic, readonly) _Bool isEnum;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long tag;
@property (copy, nonatomic, readonly) NSString *facadePropertyName;
@property (copy, nonatomic, readonly) NSString *dataPropertyName;
@property (nonatomic, readonly) long long valueType;
@property (nonatomic, readonly) long long valueStyle;
@property (nonatomic, readonly) _Bool isExtended;
@property (nonatomic, readonly) _Bool isPrivate;
@property (nonatomic, readonly) SEL resolveSelector;
@property (nonatomic, readonly) SEL deprecatedResolveSelector;
@property (copy, nonatomic, readonly) NSArray *resolveSelectorStrings;
@property (copy, nonatomic, readonly) NSArray *provideOptionsSelectorStrings;
@property (copy, nonatomic, readonly) NSArray *defaultValueSelectorStrings;
@property (copy, nonatomic, readonly) INCodableAttribute *codableAttribute;
@property (nonatomic, readonly) Class resolutionResultClass;
@property (retain, nonatomic) NSNumber *rank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localizeValue:(id)arg1 forLanguage:(id)arg2;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(_Bool)arg5 isPrivate:(_Bool)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 codableAttribute:(id)arg9 defaultValueSelectorStrings:(id)arg10 provideOptionsSelectorStrings:(id)arg11 resolutionResultClass:(Class)arg12 resolveSelectors:(SEL)arg13;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(_Bool)arg7 isPrivate:(_Bool)arg8 resolveSelectors:(SEL)arg9;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(_Bool)arg5 isPrivate:(_Bool)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 defaultValueSelectorStrings:(id)arg9 provideOptionsSelectorStrings:(id)arg10 resolutionResultClass:(Class)arg11 resolveSelectors:(SEL)arg12;
- (void)setValue:(id)arg1 forSlotComposer:(id)arg2;
- (id)valueForSlotComposer:(id)arg1;

@end
