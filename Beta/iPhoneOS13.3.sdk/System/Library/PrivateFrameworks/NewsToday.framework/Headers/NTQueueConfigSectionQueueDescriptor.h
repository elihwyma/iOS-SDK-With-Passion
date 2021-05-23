/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NTQueueConfigSectionQueueDescriptor : NSObject

{
    NSArray *_sectionDescriptors;
    unsigned long long _visibleSectionConfigsLimit;
}

@property (copy, nonatomic, readonly) NSArray *sectionDescriptors;
@property (nonatomic, readonly) unsigned long long visibleSectionConfigsLimit;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQueueConfig:(id)arg1 appConfiguration:(id)arg2 todayData:(id)arg3 supplementalFeedFilterOptions:(long long)arg4 respectsWidgetVisibleSectionsLimit:(_Bool)arg5;

@end
