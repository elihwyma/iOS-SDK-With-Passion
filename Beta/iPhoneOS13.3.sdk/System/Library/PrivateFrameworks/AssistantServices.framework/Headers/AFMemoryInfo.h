/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@interface AFMemoryInfo : NSObject <Swift>

{
    int _numberOfRegions;
    int _pageSizeInBytes;
    unsigned long long _virtualMemorySizeInBytes;
    unsigned long long _residentMemorySizeInBytes;
    unsigned long long _peakResidentMemorySizeInBytes;
    unsigned long long _physicalMemoryFootprintInBytes;
}

@property (nonatomic, readonly) unsigned long long virtualMemorySizeInBytes;
@property (nonatomic, readonly) int numberOfRegions;
@property (nonatomic, readonly) int pageSizeInBytes;
@property (nonatomic, readonly) unsigned long long residentMemorySizeInBytes;
@property (nonatomic, readonly) unsigned long long peakResidentMemorySizeInBytes;
@property (nonatomic, readonly) unsigned long long physicalMemoryFootprintInBytes;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithVirtualMemorySizeInBytes:(unsigned long long)arg1 numberOfRegions:(int)arg2 pageSizeInBytes:(int)arg3 residentMemorySizeInBytes:(unsigned long long)arg4 peakResidentMemorySizeInBytes:(unsigned long long)arg5 physicalMemoryFootprintInBytes:(unsigned long long)arg6;

@end
