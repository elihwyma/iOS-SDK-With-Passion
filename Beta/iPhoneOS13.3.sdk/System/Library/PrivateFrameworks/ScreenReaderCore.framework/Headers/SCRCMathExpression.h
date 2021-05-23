/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SCRCMathExpression : NSObject

{
    SCRCMathExpression *_parent;
    unsigned long long _cachedMaximumDepth;
}

@property (weak, nonatomic) SCRCMathExpression *parent;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) _Bool isRangeSubSuperscript;
@property (nonatomic, readonly) _Bool canBeUsedWithRange;
@property (nonatomic, readonly) _Bool isBaseSubSuperscript;
@property (nonatomic, readonly) _Bool canBeUsedWithBase;
@property (nonatomic, readonly) _Bool isNumber;
@property (nonatomic, readonly) _Bool isInteger;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly) _Bool isNaturalSuperscript;
@property (nonatomic, readonly) _Bool hasSimpleArrayOfChildren;
@property (nonatomic, readonly) _Bool isEllipsis;
@property (nonatomic, readonly) _Bool isTermSeparator;
@property (nonatomic, readonly) _Bool isOperationSymbol;
@property (nonatomic, readonly) _Bool isFenceDelimiter;
@property (nonatomic, readonly) _Bool isFunctionName;
@property (nonatomic, readonly) _Bool isWordOrAbbreviation;
@property (nonatomic, readonly) unsigned long long fractionLevel;
@property (nonatomic, readonly) _Bool isSimpleNumericalFraction;
@property (nonatomic, readonly) _Bool beginsWithSpace;
@property (nonatomic, readonly) _Bool endsWithSpace;
@property (nonatomic, readonly) _Bool isMultiRowTable;
@property (nonatomic, readonly) _Bool isUnlinedFraction;
@property (nonatomic, readonly) NSString *latexFormatStringAsOver;
@property (nonatomic, readonly) NSString *latexFormatStringAsUnder;
@property (nonatomic, readonly) _Bool canBeWrappedInLatexMathIndicators;
@property (nonatomic, readonly) NSArray *siblings;
@property (nonatomic, readonly) NSArray *subExpressions;

+ (id)mathExpressionWithDictionary:(id)arg1;
+ (Class)_classForExpressionType:(id)arg1;
+ (void)setPathToSegmentOrderingPlist:(id)arg1;

- (id)initWithDictionary:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)mathMLString;
- (id)speakableDescription;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)localizedAttributedStringForKey:(id)arg1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 prefix:(id)arg4 suffix:(id)arg5;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (unsigned long long)maximumDepth;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2;
- (unsigned long long)numberOfTables;
- (id)latexDescriptionInMathMode:(_Bool)arg1;
- (id)latexMathModeDescription;
- (id)_scrcBundle;
- (id)localizedAttributedStringForKey:(id)arg1 treePosition:(id)arg2;
- (id)speakableSegments:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3;
- (void)_applyTreePositionOfOriginalSegment:(id)arg1 toPrefixedOrSuffixedSegment:(id)arg2;
- (id)fenceDelimiters;
- (id)latexIdentifierForIdentifier:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2 isPartOfWord:(_Bool)arg3;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(long long)arg1;
- (id)dollarCodeDescription;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6;
- (id)speakableSegmentsUpToDepth:(unsigned long long)arg1;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableSummary;
- (id)latexDescription;
- (_Bool)canFormWordStartingWithExpression:(id)arg1;
- (id)localizedStringForNumber:(id)arg1;
- (id)localizedSegmentOrderingForKey:(id)arg1;
- (id)arrayWithoutNilsFromFirstChild:(id)arg1 secondChild:(id)arg2 thirdChild:(id)arg3;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 localizablePrefix:(id)arg4 localizableSuffix:(id)arg5;
- (id)speakableSegments:(id)arg1 withLocalizablePrefix:(id)arg2 localizableSuffix:(id)arg3;
- (unsigned long long)maximumFractionLevelOfSubExpressions;
- (id)latexIdentifierForFenceOperator:(id)arg1 isClosingOperator:(_Bool)arg2;
- (id)latexDescriptionForChildrenJoinedByString:(id)arg1;

@end
