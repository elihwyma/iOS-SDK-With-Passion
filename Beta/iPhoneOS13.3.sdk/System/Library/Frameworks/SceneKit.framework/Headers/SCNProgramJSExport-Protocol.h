/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSString;

@protocol MTLLibrary, SCNProgramDelegate;

@protocol SCNProgramJSExport <Swift>

@property (copy, nonatomic) NSString *vertexShader;
@property (copy, nonatomic) NSString *fragmentShader;
@property (copy, nonatomic) NSString *tessellationControlShader;
@property (copy, nonatomic) NSString *tessellationEvaluationShader;
@property (copy, nonatomic) NSString *geometryShader;
@property (copy, nonatomic) NSString *vertexFunctionName;
@property (copy, nonatomic) NSString *fragmentFunctionName;
@property (nonatomic, getter=isOpaque) _Bool opaque;
@property (nonatomic) id <SCNProgramDelegate> delegate;
@property (retain, nonatomic) id <MTLLibrary> library;

+ (unsigned short)program;

- (unsigned short)copy;
- (unsigned short)handleBindingOfBufferNamed:frequency:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setSemantic:forSymbol:options: /* Error: Ran out of types for this method. */;
- (unsigned short)semanticForSymbol: /* Error: Ran out of types for this method. */;

@end
