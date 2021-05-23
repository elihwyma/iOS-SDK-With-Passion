/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString;

@protocol EQKitLayoutNode;

@interface EQKitMathMLNode : NSObject <Swift>

{
    id <EQKitLayoutNode> mParent;
}

@property (nonatomic) id <EQKitLayoutNode> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isNumber;
- (_Bool)isBaseFontNameUsed;
- (int)isOperatorPaddingRequired;
- (struct Schemata)layoutSchemata;
- (_Bool)isSpaceLike;
- (id)layoutStyleNode;
- (_Bool)isEmbellishedOperator;
- (id)operatorCore;
- (_Bool)isAttributeDefaultInheritableFromStyle:(int)arg1;
- (long long)scriptLevelWithBase:(long long)arg1;

@end
