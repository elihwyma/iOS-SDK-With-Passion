/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class FMTimedMetadataItem;

__attribute__((visibility("hidden")))
@interface MiroBeatMetadata : NSObject

{
    FMTimedMetadataItem *_metadataItem;
    long long _priority;
}

@property (retain, nonatomic) FMTimedMetadataItem *metadataItem;
@property (nonatomic) long long priority;

+ (id)beatWithMetadataItem:(id)arg1 andPriority:(long long)arg2;

- (id)description;
- (id)initWithMetadataItem:(id)arg1 andPriority:(long long)arg2;

@end
