/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDProcessor.h>

__attribute__((visibility("hidden")))
@interface CHPValueAxisFormatting : EDProcessor

- (_Bool)isObjectSupported:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (_Bool)isPercentageFormattingInContentFormatString:(id)arg1 edValue:(struct EDValue *)arg2;
- (id)dataPointFormattingInSeriesCollection:(id)arg1;
- (id)dataPointFormattingInData:(id)arg1;
- (id)dataPointFormattingInSources:(id)arg1;

@end
