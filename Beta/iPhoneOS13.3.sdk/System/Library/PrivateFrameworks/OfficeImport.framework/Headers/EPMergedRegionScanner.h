/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDProcessor.h>

__attribute__((visibility("hidden")))
@interface EPMergedRegionScanner : EDProcessor

- (_Bool)isObjectSupported:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (_Bool)processMergedRegion:(id)arg1 inWorksheet:(id)arg2;

@end
