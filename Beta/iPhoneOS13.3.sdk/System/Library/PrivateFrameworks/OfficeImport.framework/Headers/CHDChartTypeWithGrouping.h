/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDChartType.h>

__attribute__((visibility("hidden")))
@interface CHDChartTypeWithGrouping : CHDChartType

{
    int mGrouping;
}

- (void)setGrouping:(int)arg1;
- (int)grouping;
- (id)initWithChart:(id)arg1;
- (_Bool)isGroupingStacked;
- (id)chdGroupingString;

@end
