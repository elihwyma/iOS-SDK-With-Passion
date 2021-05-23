/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject

{
    EDWorkbook *mWorkbook;
    NSMutableArray *mProcessors;
}

- (void)removeAllObjects;
- (void)markObject:(id)arg1 processor:(Class)arg2;
- (id)initWithWorkbook:(id)arg1;
- (void)addProcessorClass:(Class)arg1;
- (_Bool)hasProcessors;
- (void)removeProcessorClass:(Class)arg1;
- (void)applyProcessorsWithSheet:(id)arg1;

@end
