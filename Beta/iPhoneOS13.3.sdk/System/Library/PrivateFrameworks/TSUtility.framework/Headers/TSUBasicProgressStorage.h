/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@interface TSUBasicProgressStorage : NSObject

{
    double mValue;
    double mMaxValue;
    _Bool mIndeterminate;
}

@property double value;
@property double maxValue;
@property (getter=isIndeterminate) _Bool indeterminate;

@end
