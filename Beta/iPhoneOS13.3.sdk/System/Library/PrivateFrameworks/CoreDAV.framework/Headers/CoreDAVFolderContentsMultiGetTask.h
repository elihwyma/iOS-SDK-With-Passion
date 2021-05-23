/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVContainerMultiGetTask.h>

@interface CoreDAVFolderContentsMultiGetTask : CoreDAVContainerMultiGetTask

- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 appSpecificDataItemClass:(Class)arg3;
- (id)copyAdditionalPropElements;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;

@end
