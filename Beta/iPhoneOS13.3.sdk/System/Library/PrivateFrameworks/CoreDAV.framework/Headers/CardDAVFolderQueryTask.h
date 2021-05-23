/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVContainerQueryTask.h>

@interface CardDAVFolderQueryTask : CoreDAVContainerQueryTask

- (id)initWithSearchTerms:(id)arg1 searchLimit:(unsigned long long)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (void)addFiltersToXMLData:(id)arg1;

@end
