/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUBasicProgressStorage : NSObject

{
    double mValue;
    double mMaxValue;
    _Bool mIndeterminate;
}

@property double value;
@property double maxValue;
@property (getter=isIndeterminate) _Bool indeterminate;

@end
