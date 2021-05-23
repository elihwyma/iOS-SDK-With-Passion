/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@interface MLSaver : NSObject

+ (_Bool)saveModelToAssetAtURL:(id)arg1 model:(id)arg2 error:(id *)arg3;
+ (_Bool)saveModelToArchive:(struct _MLModelOutputArchiver *)arg1 model:(id)arg2 error:(id *)arg3;
+ (_Bool)saveModelToArchive:(struct _MLModelOutputArchiver *)arg1 model:(id)arg2 compilerOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)copyModelAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;

@end
