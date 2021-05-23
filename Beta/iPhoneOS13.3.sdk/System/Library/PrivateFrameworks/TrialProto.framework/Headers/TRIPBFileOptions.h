/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString;

@interface TRIPBFileOptions : TRIPBMessage

@property (copy, nonatomic) NSString *javaPackage;
@property (nonatomic) _Bool hasJavaPackage;
@property (copy, nonatomic) NSString *javaOuterClassname;
@property (nonatomic) _Bool hasJavaOuterClassname;
@property (nonatomic) _Bool javaMultipleFiles;
@property (nonatomic) _Bool hasJavaMultipleFiles;
@property (nonatomic) _Bool javaGenerateEqualsAndHash;
@property (nonatomic) _Bool hasJavaGenerateEqualsAndHash;
@property (nonatomic) _Bool javaStringCheckUtf8;
@property (nonatomic) _Bool hasJavaStringCheckUtf8;
@property (nonatomic) int optimizeFor;
@property (nonatomic) _Bool hasOptimizeFor;
@property (copy, nonatomic) NSString *goPackage;
@property (nonatomic) _Bool hasGoPackage;
@property (nonatomic) _Bool ccGenericServices;
@property (nonatomic) _Bool hasCcGenericServices;
@property (nonatomic) _Bool javaGenericServices;
@property (nonatomic) _Bool hasJavaGenericServices;
@property (nonatomic) _Bool pyGenericServices;
@property (nonatomic) _Bool hasPyGenericServices;
@property (nonatomic) _Bool phpGenericServices;
@property (nonatomic) _Bool hasPhpGenericServices;
@property (nonatomic) _Bool deprecated;
@property (nonatomic) _Bool hasDeprecated;
@property (nonatomic) _Bool ccEnableArenas;
@property (nonatomic) _Bool hasCcEnableArenas;
@property (copy, nonatomic) NSString *objcClassPrefix;
@property (nonatomic) _Bool hasObjcClassPrefix;
@property (copy, nonatomic) NSString *csharpNamespace;
@property (nonatomic) _Bool hasCsharpNamespace;
@property (copy, nonatomic) NSString *swiftPrefix;
@property (nonatomic) _Bool hasSwiftPrefix;
@property (copy, nonatomic) NSString *phpClassPrefix;
@property (nonatomic) _Bool hasPhpClassPrefix;
@property (copy, nonatomic) NSString *phpNamespace;
@property (nonatomic) _Bool hasPhpNamespace;
@property (copy, nonatomic) NSString *phpMetadataNamespace;
@property (nonatomic) _Bool hasPhpMetadataNamespace;
@property (copy, nonatomic) NSString *rubyPackage;
@property (nonatomic) _Bool hasRubyPackage;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (nonatomic, readonly) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
