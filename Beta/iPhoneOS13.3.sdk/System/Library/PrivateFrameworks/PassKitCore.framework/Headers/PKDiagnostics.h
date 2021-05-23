/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@interface PKDiagnostics : NSObject

+ (id)_allPasses;
+ (id)_secureElementData;
+ (void)generateDiagnosticsPackageWithPassLibrary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_metadataForCardAtURL:(id)arg1;
+ (void)generateZippedDiagnosticsPackageWithPassLibrary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)generateUbiquityDiagnosticsFile:(_Bool)arg1;
+ (void)saveTransitState:(id)arg1 forPaymentApplication:(id)arg2;

@end
