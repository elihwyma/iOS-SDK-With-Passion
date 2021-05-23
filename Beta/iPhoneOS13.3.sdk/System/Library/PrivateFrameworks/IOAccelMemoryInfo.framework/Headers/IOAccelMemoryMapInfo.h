/*
 Image: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
 */

#import <Foundation/NSObject.h>

@interface IOAccelMemoryMapInfo : NSObject

{
    int pid;
    unsigned long long address;
    id _expansionData;
}

@property int pid;
@property unsigned long long address;

@end
