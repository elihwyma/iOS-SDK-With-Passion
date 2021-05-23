/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol EQKitLayoutNode;

@protocol EQKitLayoutNode <Swift>

@property (nonatomic, readonly) id <EQKitLayoutNode> parent;

- (unsigned short)isNumber;
- (unsigned short)isBaseFontNameUsed;
- (unsigned short)isOperatorPaddingRequired;
- (unsigned short)layoutSchemata;
- (unsigned short)isSpaceLike;
- (unsigned short)layoutStyleNode;
- (unsigned short)isEmbellishedOperator;
- (unsigned short)operatorCore;
- (unsigned short)isAttributeDefaultInheritableFromStyle: /* Error: Ran out of types for this method. */;

@end
