/*
 Image: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IOAccelMemoryPoolTotals : NSObject

{
    NSString *device_name;
    NSString *pool;
    unsigned long long allocatedSize;
    unsigned long long residentSize;
    unsigned long long wiredSize;
    unsigned long long dirtySize;
    unsigned long long purgeableSize;
    unsigned long long nonpurgeableSize;
    unsigned long long orphanedSize;
}

@property (retain) NSString *device_name;
@property (retain) NSString *pool;
@property unsigned long long allocatedSize;
@property unsigned long long residentSize;
@property unsigned long long wiredSize;
@property unsigned long long dirtySize;
@property unsigned long long purgeableSize;
@property unsigned long long nonpurgeableSize;
@property unsigned long long orphanedSize;

- (void)dealloc;

@end
