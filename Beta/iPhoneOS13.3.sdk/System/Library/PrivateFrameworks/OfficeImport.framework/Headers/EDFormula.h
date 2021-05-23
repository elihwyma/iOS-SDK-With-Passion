/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDFormula : NSObject

{
    struct __CFData *mPackedData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)formula;

- (id)init;
- (void)dealloc;
- (_Bool)removeTokenAtIndex:(unsigned int)arg1;
- (id)warning;
- (struct EDToken *)tokenAtIndex:(unsigned int)arg1;
- (void)setWarning:(int)arg1;
- (unsigned int)tokenCount;
- (char *)lastExtendedDataForTokenAtIndex:(unsigned int)arg1 length:(unsigned int *)arg2;
- (int)tokenTypeAtIndex:(unsigned int)arg1;
- (_Bool)isSupportedFormula;
- (void)setCleaned:(_Bool)arg1;
- (id)originalFormulaString;
- (void)populateXlPtg:(struct XlPtg *)arg1 index:(unsigned int)arg2;
- (_Bool)setupTokensWithTokensCount:(unsigned int)arg1 tokensWithDataCount:(unsigned int)arg2 extendedDataLength:(unsigned int)arg3 extendedDataCount:(unsigned int)arg4;
- (void)removeAllTokens;
- (_Bool)copyTokenFromXlPtg:(struct XlPtg *)arg1;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (_Bool)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (char *)setExtendedDataAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)setupExtendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (_Bool)copyTokenAtIndex:(unsigned int)arg1 fromFormula:(id)arg2;
- (int)warningType;
- (unsigned int)firstTokenIndexForArgAtIndex:(unsigned int)arg1;
- (id)saveArgs:(unsigned int)arg1 andDelete:(_Bool)arg2;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (_Bool)convertToList:(unsigned int)arg1 withFinalParen:(_Bool)arg2;
- (char *)extendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int *)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (_Bool)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (_Bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (_Bool)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (_Bool)convertToList:(unsigned int)arg1;
- (_Bool)convertToIntersect:(unsigned int)arg1;
- (_Bool)convertLastRefsToArea;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(_Bool *)arg1 withEDLinks:(id)arg2;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(_Bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (_Bool)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (_Bool)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (_Bool)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (_Bool)fixTableOfConstantsRefs;
- (_Bool)uppercaseArgAtIndex:(unsigned int)arg1;
- (id)initWithFormula:(id)arg1;
- (void)replaceTokenTypeAtIndex:(unsigned int)arg1 withType:(int)arg2;
- (unsigned int)countExtendedDataForTokenAtIndex:(unsigned int)arg1;
- (_Bool)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (_Bool)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2 formulaTokenIndex:(unsigned int)arg3;
- (ChVector_1f909c3e *)xlPtgs;
- (_Bool)convertTokensToSharedAtRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (void)setOriginalFormulaString:(id)arg1;
- (id)warningParameter;
- (void)setWarningParameter:(id)arg1;
- (_Bool)isCleaned;
- (_Bool)isContainsRelativeReferences;
- (void)updateContainsRelativeReferences:(_Bool)arg1;
- (_Bool)isCleanedWithEvaluationStack;
- (void)updateCleanedWithEvaluationStack:(_Bool)arg1;
- (_Bool)isSharedFormula;
- (_Bool)isBaseFormula;
- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;

@end
