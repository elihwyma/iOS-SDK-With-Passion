/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFCloudKitBaseMetric.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric

{
    NSNumber *_sizeInBytes;
}

@property (nonatomic, readonly) NSNumber *sizeInBytes;

- (void)dealloc;
- (id)payload;
- (id)initWithContainerIdentifier:(id)arg1;
- (void)addByteSize:(unsigned long long)arg1;

@end
