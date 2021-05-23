/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVContainerInfoTaskGroup.h>

@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup

{
    _Bool _fetchSharees;
}

@property (nonatomic) _Bool fetchSharees;

- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;
- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (id)containerForURL:(id)arg1;

@end
