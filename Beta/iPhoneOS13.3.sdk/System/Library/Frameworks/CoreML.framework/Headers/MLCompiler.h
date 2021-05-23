/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@interface MLCompiler : NSObject

+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)compileSpecificationAtURL:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)versionInfo;
+ (id)compiledVersionForSpecificationAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end
