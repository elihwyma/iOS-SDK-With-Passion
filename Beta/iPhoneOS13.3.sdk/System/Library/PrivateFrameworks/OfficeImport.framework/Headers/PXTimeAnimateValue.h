/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PXTimeAnimateValue : NSObject

{
    id mVariant;
    _Bool mHasPercentTime;
    double mPercentTime;
    NSString *mFormula;
}

- (id)init;
- (id)variant;
- (void)setVariant:(id)arg1;
- (id)formula;
- (void)setFormula:(id)arg1;
- (_Bool)hasPercentTime;
- (double)percentTime;
- (void)setPercentTime:(double)arg1;

@end
