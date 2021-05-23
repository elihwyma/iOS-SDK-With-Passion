/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFMemoryInfo, NSString;

@interface _AFMemoryInfoMutation : NSObject

{
    AFMemoryInfo *_baseModel;
    unsigned long long _virtualMemorySizeInBytes;
    int _numberOfRegions;
    int _pageSizeInBytes;
    unsigned long long _residentMemorySizeInBytes;
    unsigned long long _peakResidentMemorySizeInBytes;
    unsigned long long _physicalMemoryFootprintInBytes;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasVirtualMemorySizeInBytes:1;
        unsigned int hasNumberOfRegions:1;
        unsigned int hasPageSizeInBytes:1;
        unsigned int hasResidentMemorySizeInBytes:1;
        unsigned int hasPeakResidentMemorySizeInBytes:1;
        unsigned int hasPhysicalMemoryFootprintInBytes:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setVirtualMemorySizeInBytes:(unsigned long long)arg1;
- (void)setNumberOfRegions:(int)arg1;
- (void)setPageSizeInBytes:(int)arg1;
- (void)setResidentMemorySizeInBytes:(unsigned long long)arg1;
- (void)setPeakResidentMemorySizeInBytes:(unsigned long long)arg1;
- (void)setPhysicalMemoryFootprintInBytes:(unsigned long long)arg1;

@end
