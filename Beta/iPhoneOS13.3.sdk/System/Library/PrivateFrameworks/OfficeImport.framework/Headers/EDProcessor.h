/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDResources, EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessor : NSObject

{
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    NSMutableArray *mObjects;
}

- (_Bool)isObjectSupported:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (id)initWithWorkbook:(id)arg1;
- (void)markObjectForPostProcessing:(id)arg1;
- (void)applyProcessorWithSheet:(id)arg1;

@end
