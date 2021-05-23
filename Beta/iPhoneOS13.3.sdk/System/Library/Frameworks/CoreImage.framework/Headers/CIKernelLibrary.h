/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@protocol MTLLibrary, OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface CIKernelLibrary : NSObject

{
    NSObject<OS_dispatch_data> *_data;
    id <MTLLibrary> _library;
}

@property (readonly) unsigned long long functionCount;

+ (id)libraryWithData:(id)arg1 error:(id *)arg2;
+ (id)internalLibraryWithName:(id)arg1 device:(id)arg2;

- (void)dealloc;
- (id)functionWithName:(id)arg1;
- (id)externFunctionNames;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)newFunctionWithName:(id)arg1 device:(id)arg2;

@end
