/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/Swift-Protocol.h>

@protocol EDFormulaBuilding <Swift>

- (unsigned short)removeTokenAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setWarning: /* Error: Ran out of types for this method. */;
- (unsigned short)tokenTypeAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)isSupportedFormula;
- (unsigned short)addToken:extendedDataLength: /* Error: Ran out of types for this method. */;
- (unsigned short)warningType;
- (unsigned short)setExtendedDataForLastTokenAtIndex:length: /* Error: Ran out of types for this method. */;
- (unsigned short)convertToList:withFinalParen: /* Error: Ran out of types for this method. */;
- (unsigned short)addToken:extendedDataLength:numArgs: /* Error: Ran out of types for this method. */;
- (unsigned short)insertName:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)insertExternalName:withLink:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addArrayWithCol:andRow: /* Error: Ran out of types for this method. */;
- (unsigned short)convertToList: /* Error: Ran out of types for this method. */;
- (unsigned short)convertToIntersect: /* Error: Ran out of types for this method. */;
- (unsigned short)convertLastRefsToArea;
- (unsigned short)lastTokenRefOrArea3dLinkRefIsValid:withEDLinks: /* Error: Ran out of types for this method. */;
- (unsigned short)markLastTokenAsDuration;
- (unsigned short)markLastTokenAsSpanningRefVertically:withMin:andMax: /* Error: Ran out of types for this method. */;
- (unsigned short)shrinkSpanningRefAtArgIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addInfixOperator:atIndex:factor: /* Error: Ran out of types for this method. */;
- (unsigned short)wrapArgumentsWithOperator:argumentCount:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)fixTableOfConstantsRefs;
- (unsigned short)uppercaseArgAtIndex: /* Error: Ran out of types for this method. */;

@end
