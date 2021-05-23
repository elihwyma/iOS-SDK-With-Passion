/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVContainerMultiGetTask.h>

@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask

{
    _Bool _getScheduleTags;
    _Bool _getScheduleChanges;
}

@property (nonatomic) _Bool getScheduleTags;
@property (nonatomic) _Bool getScheduleChanges;

- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(_Bool)arg3 getScheduleChanges:(_Bool)arg4 appSpecificCalendarItemClass:(Class)arg5;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(_Bool)arg3 getScheduleChanges:(_Bool)arg4;
- (id)copyAdditionalPropElements;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;

@end
