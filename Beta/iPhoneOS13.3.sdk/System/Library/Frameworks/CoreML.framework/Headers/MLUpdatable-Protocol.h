/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/Swift-Protocol.h>

@protocol MLUpdatable <Swift>

+ (unsigned short)loadModelFromCompiledArchive:modelVersionInfo:compilerVersionInfo:configuration:error: /* Error: Ran out of types for this method. */;

- (unsigned short)setUpdateProgressHandlers:dispatchQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)updateModelWithData: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeUpdateWithParameters: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeUpdate;
- (unsigned short)cancelUpdate;

@end
