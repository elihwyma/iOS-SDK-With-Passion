/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MNDistanceFormatOptions : NSObject

{
    _Bool metric;
    _Bool yards;
    _Bool abbreviateUnits;
    _Bool spoken;
    unsigned long long maximumFractionDigits;
    long long rounding;
    unsigned long long _minimumFractionDigits;
}

@property (nonatomic) unsigned long long minimumFractionDigits;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) _Bool metric;
@property (nonatomic) _Bool yards;
@property (nonatomic) _Bool abbreviateUnits;
@property (nonatomic) _Bool spoken;
@property (nonatomic) long long rounding;

@end
