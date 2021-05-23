/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNDSPGraphInterpreter : NSObject

{
    struct unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter>> _interpreter;
}

+ (id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;
+ (id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;
+ (unordered_map_0ace0ab1)stringMapFromStringDictionary:(id)arg1;
+ (vector_9492931a)stringVectorFromStringArray:(id)arg1;

- (id)init;
- (id).cxx_construct;
- (id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;
- (id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;

@end
