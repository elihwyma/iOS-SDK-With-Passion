/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@interface DKUtilities : NSObject

+ (id)extensionAttributes;
+ (id)acceptableDecoderClasses;
+ (id)inputsForDiagnostic:(id)arg1 predicates:(id)arg2 specifications:(id)arg3 parameters:(id)arg4;
+ (void)moveFilesToSharedContainerInMutableResult:(id)arg1;
+ (Class)diagnosticInputsClassAttribute;
+ (id)inputsUsingClass:(Class)arg1 diagnostic:(id)arg2 predicates:(id)arg3 specifications:(id)arg4 parameters:(id)arg5;
+ (id)_sharedParsingFailedError;
+ (id)_fetchItemProviderFromItems:(id)arg1 withError:(id *)arg2;

@end
