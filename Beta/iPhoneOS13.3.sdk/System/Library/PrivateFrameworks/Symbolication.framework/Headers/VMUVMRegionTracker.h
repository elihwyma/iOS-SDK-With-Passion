/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol VMUStackLogReader;

@interface VMUVMRegionTracker : NSObject

{
    unsigned int _task;
    id <VMUStackLogReader> _stackLogReader;
    NSMutableArray *_regionInfoArray;
}

@property (readonly) long long regionCount;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (void)_claimUnarchivingOfClass:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (id)vmRegionRangeInfoForRange:(struct _VMURange)arg1;
- (unsigned long long)handleStackLogType:(unsigned int)arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 stackID:(unsigned long long)arg4;
- (unsigned long long)_regionIndexForAddress:(unsigned long long)arg1;
- (id)initWithTask:(unsigned int)arg1 stackLogReader:(id)arg2;
- (void)convertStackIDs:(CDUnknownBlockType)arg1;

@end
