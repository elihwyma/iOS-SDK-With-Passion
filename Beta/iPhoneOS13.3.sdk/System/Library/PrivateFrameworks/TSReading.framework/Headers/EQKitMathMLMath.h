/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class EQKitEnvironmentInstance, EQKitMathMLNode, NSString;

@protocol EQKitLayoutNode;

@interface EQKitMathMLMath : NSObject <Swift>

{
    EQKitMathMLNode *mExpression;
    struct AttributeCollection *mAttributeCollection;
    EQKitEnvironmentInstance *mEnvironment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <EQKitLayoutNode> parent;

- (id)init;
- (void)dealloc;
- (_Bool)isNumber;
- (id)newLayout;
- (_Bool)isBaseFontNameUsed;
- (struct AttributeCollection *)attributeCollection;
- (int)isOperatorPaddingRequired;
- (struct Schemata)layoutSchemata;
- (_Bool)isSpaceLike;
- (id)layoutStyleNode;
- (_Bool)isEmbellishedOperator;
- (id)operatorCore;
- (_Bool)isAttributeDefaultInheritableFromStyle:(int)arg1;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (const set_25e6ba53 *)mathMLAttributes;
- (long long)scriptLevelWithBase:(long long)arg1;

@end
