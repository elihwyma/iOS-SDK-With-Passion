/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLObjectWithLabel.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@protocol MTLDevice;

@interface _MTLLibrary : _MTLObjectWithLabel

{
    id <MTLDevice> _device;
    struct MTLLibraryData *_libraryData;
    NSMutableDictionary *_functionDictionary;
    struct MTLLibraryContainer *_cacheEntry;
}

@property (retain, nonatomic, readonly) NSMutableDictionary *functionDictionary;
@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (retain, readonly) NSArray *functionNames;
@property (retain, readonly) NSArray *externFunctionNames;
@property (readonly) struct MTLLibraryData *libraryData;
@property (readonly) struct MTLLibraryContainer *cacheEntry;
@property (copy) NSString *overrideTriple;
@property (copy, readonly) NSData *libraryDataContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)newFunctionWithName:(id)arg1;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;
- (id)newExternFunctionWithName:(id)arg1;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id *)arg4;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 error:(id *)arg4;
- (id)newFunctionWithNameInternal:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithLibraryContainer:(struct MTLLibraryContainer *)arg1 device:(id)arg2;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
