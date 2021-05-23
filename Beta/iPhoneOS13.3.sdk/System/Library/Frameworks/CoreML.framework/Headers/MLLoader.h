/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@interface MLLoader : NSObject

+ (id)loadModelFromAssetAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)checkAssetPath:(id)arg1 error:(id *)arg2;
+ (id)loadModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadUpdatableModelFromAssetAtURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromArchive:(struct _MLModelInputArchiver *)arg1 error:(id *)arg2;
+ (_Bool)unarchiveCodedModelFrom:(struct _MLModelInputArchiver *)arg1 to:(id *)arg2 error:(id *)arg3;
+ (id)loadModelFromArchive:(struct _MLModelInputArchiver *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadUpdatableModelFromArchive:(struct _MLModelInputArchiver *)arg1 configuration:(id)arg2 error:(id *)arg3;

@end
