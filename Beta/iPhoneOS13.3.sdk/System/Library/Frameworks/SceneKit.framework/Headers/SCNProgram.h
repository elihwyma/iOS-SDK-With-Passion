/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol MTLLibrary, SCNProgramDelegate;

@interface SCNProgram : NSObject

{
    NSString *_vertexShader;
    NSString *_fragmentShader;
    NSString *_vertexFunctionName;
    NSString *_fragmentFunctionName;
    NSString *_name;
    NSString *_sourceFile;
    NSMutableDictionary *_semanticInfos;
    _Bool _opaque;
    id _library;
    id _delegate;
    NSMutableDictionary *_bufferBindings;
}

@property (copy, nonatomic) NSString *vertexShader;
@property (copy, nonatomic) NSString *fragmentShader;
@property (copy, nonatomic) NSString *vertexFunctionName;
@property (copy, nonatomic) NSString *fragmentFunctionName;
@property (nonatomic, getter=isOpaque) _Bool opaque;
@property (nonatomic) id <SCNProgramDelegate> delegate;
@property (retain, nonatomic) id <MTLLibrary> library;

+ (_Bool)supportsSecureCoding;
+ (id)program;
+ (id)programWithLibrary:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setName:(id)arg1;
- (void)handleBindingOfBufferNamed:(id)arg1 frequency:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3;
- (id)semanticForSymbol:(id)arg1;
- (void)setSemanticInfos:(id)arg1;
- (void)_customEncodingOfSCNProgram:(id)arg1;
- (void)_customDecodingOfSCNProgram:(id)arg1;
- (void)setSourceFile:(id)arg1;
- (int)shadingLanguage;
- (id)sourceFile;
- (id)_optionsForSymbol:(id)arg1;
- (id)_allSymbolsWithSceneKitSemantic;
- (id)_bufferBindings;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2;

@end
