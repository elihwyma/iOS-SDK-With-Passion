/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface MTLDebugInstrumentationData : NSObject

{
    NSObject<OS_dispatch_data> *_dataMap;
    const struct MTLSerializedDebugInstrumentationData *_data;
    struct vector<const __CFString *, std::__1::allocator<const __CFString *>> _strings;
    struct vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *>> _debugLocations;
    struct vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *>> _debugSubPrograms;
}

@property (nonatomic, readonly) _Bool hasBacktrackingFailures;

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id).cxx_construct;
- (id)debugSubProgramForID:(unsigned int)arg1;
- (id)debugLocationForID:(unsigned int)arg1;
- (id)stringForID:(unsigned int)arg1;

@end
