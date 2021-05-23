/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CoreDAV/Swift-Protocol.h>

@class NSString, NSURL;

@protocol CoreDAVContainerInfoSyncProvider;

@interface CoreDAVContainerInfoSyncTaskGroup : CoreDAVTaskGroup <Swift>

{
    NSString *_previousSyncToken;
    NSURL *_containerURL;
}

@property (weak, nonatomic) id <CoreDAVContainerInfoSyncProvider> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (id)copyContainerParserMappings;
- (Class)containerItemClass;
- (id)initWithContainerURL:(id)arg1 previousSyncToken:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;

@end
