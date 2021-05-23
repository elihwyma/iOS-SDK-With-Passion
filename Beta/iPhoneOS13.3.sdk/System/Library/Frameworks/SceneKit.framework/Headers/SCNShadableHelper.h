/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, SCNProgram;

__attribute__((visibility("hidden")))
@interface SCNShadableHelper : NSObject

{
    id _owner;
    SCNProgram *_program;
    NSDictionary *_shaderModifiers;
    NSArray *_c3dShaderModifierCache;
    NSMutableArray *_argumentsNames;
    NSDictionary *_symbolToBinder;
    NSDictionary *_symbolToUnbinder;
}

@property (copy, nonatomic) NSDictionary *shaderModifiers;
@property (retain, nonatomic) SCNProgram *program;
@property (nonatomic, readonly) id owner;
@property (nonatomic, readonly) NSArray *shaderModifiersArgumentsNames;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwner:(id)arg1;
- (_Bool)isOpaque;
- (void)_commonInit;
- (const void *)__CFObject;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct __C3DFXTechnique *)_technique;
- (void)ownerWillDie;
- (void)copyModifiersFrom:(id)arg1;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_stopObservingProgram;
- (void)_programDidChange:(id)arg1;
- (void)_setC3DProgram;
- (void)_startObservingProgram;
- (void)_parseAndSetShaderModifier:(id)arg1;
- (id)shaderModifierCache;
- (void)_updateC3DProgramInputForSymbol:(id)arg1;
- (struct __C3DFXGLSLProgram *)_programFromPassAtIndex:(long long)arg1;
- (void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram *)arg1 forSymbol:(id)arg2;
- (void)_updateAllC3DProgramInputs;
- (void)_setC3DProgramDelegate;
- (void)_customEncodingOfSCNShadableHelper:(id)arg1;
- (void)_customDecodingOfSCNShadableHelper:(id)arg1;
- (void)_didDecodeSCNShadableHelper:(id)arg1;
- (_Bool)_bindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;

@end
