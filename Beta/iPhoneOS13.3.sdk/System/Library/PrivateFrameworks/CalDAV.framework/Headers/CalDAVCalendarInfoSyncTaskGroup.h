/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVContainerInfoSyncTaskGroup.h>

@interface CalDAVCalendarInfoSyncTaskGroup : CoreDAVContainerInfoSyncTaskGroup

{
    _Bool _fetchSharees;
}

@property (nonatomic) _Bool fetchSharees;

- (id)copyContainerParserMappings;
- (Class)containerItemClass;

@end
