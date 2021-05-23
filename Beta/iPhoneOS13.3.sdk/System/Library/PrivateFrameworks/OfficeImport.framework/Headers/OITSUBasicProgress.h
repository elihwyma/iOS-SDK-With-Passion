/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OITSUProgress.h>

@class OITSUBasicProgressStorage;

__attribute__((visibility("hidden")))
@interface OITSUBasicProgress : OITSUProgress

{
    OITSUBasicProgressStorage *mStorage;
}

@property double value;
@property (getter=isIndeterminate) _Bool indeterminate;

- (id)init;
- (void)dealloc;
- (double)maxValue;
- (id)initWithMaxValue:(double)arg1;

@end
