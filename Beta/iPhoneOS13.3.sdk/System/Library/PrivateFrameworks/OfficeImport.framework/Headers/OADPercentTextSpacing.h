/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADTextSpacing.h>

__attribute__((visibility("hidden")))
@interface OADPercentTextSpacing : OADTextSpacing

{
    float mPercent;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (float)percent;
- (id)initWithPercent:(float)arg1;

@end
