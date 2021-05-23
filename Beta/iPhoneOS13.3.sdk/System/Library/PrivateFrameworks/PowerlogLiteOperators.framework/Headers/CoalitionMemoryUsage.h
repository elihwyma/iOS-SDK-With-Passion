/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@interface CoalitionMemoryUsage : NSObject

{
    unsigned long long _wired_size;
    unsigned long long _purgeable_size;
    unsigned long long _phys_footprint_size;
    unsigned long long _compressed_size;
    unsigned long long _process_count;
}

@property unsigned long long wired_size;
@property unsigned long long purgeable_size;
@property unsigned long long phys_footprint_size;
@property unsigned long long compressed_size;
@property unsigned long long process_count;

@end
