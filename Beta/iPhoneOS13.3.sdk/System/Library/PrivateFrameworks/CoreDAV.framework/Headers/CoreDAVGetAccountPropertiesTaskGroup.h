/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CoreDAV/Swift-Protocol.h>

@class NSMutableSet, NSSet, NSString, NSURL;

@protocol CoreDAVGetAccountPropertiesTaskGroupDelegate;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <Swift>

{
    NSURL *_principalURL;
    NSString *_displayName;
    NSURL *_resourceID;
    NSSet *_emailAddresses;
    NSSet *_collections;
    NSSet *_principalSearchProperties;
    _Bool _isExpandPropertyReportSupported;
    _Bool _fetchPrincipalSearchProperties;
    _Bool _shouldIgnoreHomeSetOnDifferentHost;
    NSMutableSet *_redirectHistory;
}

@property (nonatomic, readonly) NSURL *principalURL;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSURL *resourceID;
@property (nonatomic, readonly) NSSet *emailAddresses;
@property (nonatomic, readonly) NSSet *collections;
@property (nonatomic, readonly) NSSet *principalSearchProperties;
@property (nonatomic, readonly) _Bool isExpandPropertyReportSupported;
@property (nonatomic) _Bool fetchPrincipalSearchProperties;
@property (weak, nonatomic) id <CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate;
@property (nonatomic) _Bool shouldIgnoreHomeSetOnDifferentHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (void)processPrincipalHeaders:(id)arg1;
- (id)homeSet;
- (_Bool)forceOptionsRequest;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)coaxServerForPrincipalHeaders;
- (void)_taskCompleted:(id)arg1 withError:(id)arg2;
- (void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3;

@end
