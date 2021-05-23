/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OAXClient.h>

__attribute__((visibility("hidden")))
@interface EXOfficeArtClient : OAXClient

{
    _Bool mAutoChartFillIsHollow;
    _Bool mAutoChartStrokeIsHollow;
}

@property _Bool autoChartFillIsHollow;
@property _Bool autoChartStrokeIsHollow;

- (void)readClientDataFromNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;
- (_Bool)chartAutoFillIsHollow;
- (_Bool)chartAutoStrokeIsHollow;

@end
