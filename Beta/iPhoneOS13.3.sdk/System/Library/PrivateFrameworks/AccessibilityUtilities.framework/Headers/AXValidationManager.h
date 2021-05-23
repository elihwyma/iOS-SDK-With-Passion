/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol AXValidationReportingServices;

@interface AXValidationManager : NSObject

{
    _Bool _shouldLogToConsole;
    _Bool _shouldCrashOnError;
    _Bool _shouldReportToServer;
    _Bool _forceDoNotReport;
    _Bool _debugBuild;
    _Bool _shouldPerformValidationChecks;
    unsigned long long _numberOfValidationErrors;
    NSString *_validationTargetName;
    NSString *_overrideProcessName;
    NSMutableArray *_consoleErrorMessages;
    id <AXValidationReportingServices> _validationReportingServices;
    unsigned long long _numberOfValidations;
    unsigned long long _numberOfValidationWarnings;
    NSMutableArray *_consoleWarningMessages;
}

@property (nonatomic) _Bool shouldPerformValidationChecks;
@property (nonatomic) _Bool shouldLogToConsole;
@property (nonatomic) _Bool shouldCrashOnError;
@property (nonatomic) _Bool shouldReportToServer;
@property (nonatomic) unsigned long long numberOfValidations;
@property (nonatomic) unsigned long long numberOfValidationErrors;
@property (retain, nonatomic) NSMutableArray *consoleErrorMessages;
@property (nonatomic) unsigned long long numberOfValidationWarnings;
@property (retain, nonatomic) NSMutableArray *consoleWarningMessages;
@property (retain, nonatomic) id <AXValidationReportingServices> validationReportingServices;
@property (nonatomic) _Bool forceDoNotReport;
@property (copy, nonatomic) NSString *validationTargetName;
@property (copy, nonatomic) NSString *overrideProcessName;
@property (nonatomic, getter=isDebugBuild) _Bool debugBuild;

+ (id)sharedInstance;

- (id)init;
- (void)_clearState;
- (void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeBlock:(id)arg1 overrideProcessName:(id)arg2;
- (_Bool)validateClass:(id)arg1 isKindOfClass:(id)arg2;
- (void)performValidations:(CDUnknownBlockType)arg1 withPreValidationHandler:(CDUnknownBlockType)arg2 postValidationHandler:(CDUnknownBlockType)arg3 safeCategoryInstallationHandler:(CDUnknownBlockType)arg4;
- (void)_resetState;
- (void)sendValidationSuccessForProcessName:(id)arg1;
- (void)_printConsoleReport:(_Bool)arg1 isDelayed:(_Bool)arg2;
- (_Bool)client:(id)arg1 validateClass:(id)arg2;
- (void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 isKindOfClass:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 hasInstanceVariable:(id)arg3 withType:(const char *)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)_iterateMethodsOfType:(int)arg1 onClass:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (_Bool)_client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(const char *)arg4 argList:(char *)arg5;
- (_Bool)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4 returnType:(id)arg5 arguments:(id)arg6;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(const char *)arg4 argList:(char *)arg5;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3 customGetter:(id)arg4 customSetter:(id)arg5 withType:(const char *)arg6;
- (void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 conformsToProtocol:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 conformsToProtocol:(id)arg3;
- (void)sendValidateExceptionForProtocol:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 hasMethod:(id)arg3 isInstanceMethod:(_Bool)arg4 isRequired:(_Bool)arg5;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalInstanceMethod:(id)arg3;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredInstanceMethod:(id)arg3;
- (void)_generateWarningsForMethodType:(int)arg1 onClass:(Class)arg2 superclassMethods:(struct objc_method **)arg3 numberOfSuperclassMethods:(unsigned int)arg4;
- (id)_nameForMethod:(struct objc_method *)arg1;
- (void)_generateWarningsForPrefixedMethodNames:(id)arg1 client:(id)arg2 methodType:(int)arg3 methodName:(id)arg4 className:(id)arg5;
- (_Bool)installSafeCategory:(id)arg1 canInteractWithTargetClass:(_Bool)arg2;
- (void)_generateWarningsOnSafeCategoryClass:(Class)arg1;
- (void)sendExceptionForSafeCategoryOnWrongTarget:(id)arg1 targetBundle:(id)arg2 expectedBundle:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendGenericReport:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2;
- (void)sendFailedTestCase:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)performValidations:(CDUnknownBlockType)arg1 withPreValidationHandler:(CDUnknownBlockType)arg2 postValidationHandler:(CDUnknownBlockType)arg3;
- (void)installSafeCategories:(CDUnknownBlockType)arg1 afterDelay:(double)arg2 validationTargetName:(id)arg3 overrideProcessName:(id)arg4;
- (_Bool)validateClass:(id)arg1;
- (_Bool)validateClass:(id)arg1 hasInstanceVariable:(id)arg2 withType:(const char *)arg3;
- (_Bool)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4;
- (_Bool)validateClass:(id)arg1 hasClassMethod:(id)arg2 withFullSignature:(const char *)arg3;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(const char *)arg4;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(const char *)arg4;
- (_Bool)validateClass:(id)arg1 hasInstanceMethod:(id)arg2 withFullSignature:(const char *)arg3;
- (_Bool)validateClass:(id)arg1 hasProperty:(id)arg2 withType:(const char *)arg3;
- (_Bool)validateClass:(id)arg1 hasProperty:(id)arg2 customGetter:(id)arg3 customSetter:(id)arg4 withType:(const char *)arg5;
- (_Bool)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3 withType:(const char *)arg4;
- (_Bool)validateClass:(id)arg1 conformsToProtocol:(id)arg2;
- (_Bool)validateProtocol:(id)arg1 conformsToProtocol:(id)arg2;
- (_Bool)validateProtocol:(id)arg1 hasMethod:(id)arg2 isInstanceMethod:(_Bool)arg3 isRequired:(_Bool)arg4;
- (_Bool)validateProtocol:(id)arg1 hasOptionalInstanceMethod:(id)arg2;
- (_Bool)validateProtocol:(id)arg1 hasRequiredInstanceMethod:(id)arg2;
- (_Bool)validateProtocol:(id)arg1 hasOptionalClassMethod:(id)arg2;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalClassMethod:(id)arg3;
- (_Bool)validateProtocol:(id)arg1 hasRequiredClassMethod:(id)arg2;
- (_Bool)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredClassMethod:(id)arg3;
- (_Bool)installSafeCategory:(id)arg1;

@end
