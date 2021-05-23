/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDProcessor.h>

__attribute__((visibility("hidden")))
@interface CHPSeriesDateTimeFormatting : EDProcessor

- (_Bool)isObjectSupported:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (_Bool)isDateTimeFomrattingInData:(id)arg1;
- (_Bool)isDateTimeFormattingInContentFormatString:(id)arg1 edCell:(struct EDCellHeader *)arg2;

@end
