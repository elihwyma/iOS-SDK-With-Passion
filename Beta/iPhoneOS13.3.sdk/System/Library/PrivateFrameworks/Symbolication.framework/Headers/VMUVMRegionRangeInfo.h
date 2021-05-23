/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@interface VMUVMRegionRangeInfo : NSObject

{
    unsigned long long address;
    unsigned long long size;
    unsigned long long stackIdentifier;
    unsigned int userTag;
}

@property unsigned long long address;
@property unsigned long long size;
@property (readonly) struct _VMURange range;
@property unsigned long long stackIdentifier;
@property unsigned int userTag;

- (id)init;

@end
