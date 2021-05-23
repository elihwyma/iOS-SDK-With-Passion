/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSArray, NSMutableArray, NSString;

@protocol CoreDAVAccountInfoProvider, CoreDAVDiscoveryTaskGroupDelegate;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup

{
    NSString *_requiredComplianceClass;
    NSArray *_httpPorts;
    NSArray *_httpsPorts;
    NSString *_httpServiceString;
    NSString *_httpsServiceString;
    NSString *_wellKnownPath;
    NSArray *_potentialContextPaths;
    NSMutableArray *_discoveries;
    _Bool _didReceiveAuthenticationError;
    _Bool _shouldBailEarly;
    id <CoreDAVAccountInfoProvider> _discoveredAccountInfo;
}

@property (retain, nonatomic) NSString *wellKnownPath;
@property (retain, nonatomic) NSArray *potentialContextPaths;
@property (nonatomic) _Bool didReceiveAuthenticationError;
@property (retain, nonatomic) id <CoreDAVAccountInfoProvider> discoveredAccountInfo;
@property (weak, nonatomic) id <CoreDAVDiscoveryTaskGroupDelegate> delegate;
@property (nonatomic) _Bool shouldBailEarly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)cancelTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPaths:(id)arg7 requiredComplianceClass:(id)arg8;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)syncAway;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPath:(id)arg7 potentialContextPaths:(id)arg8 requiredComplianceClass:(id)arg9;
- (void)startSRVLookup:(id)arg1 serviceString:(id)arg2;
- (id)allDiscoveryPorts:(id)arg1 withScheme:(id)arg2;
- (void)startWellKnownLocationTask:(id)arg1 withURL:(id)arg2;
- (id)setupDiscoveries:(id)arg1 withSchemes:(id)arg2;
- (void)startPropfindTask:(id)arg1;
- (id)allDiscoveryPaths:(id)arg1;
- (void)completeDiscovery:(id)arg1 error:(id)arg2;
- (id)propFindProperties;
- (void)startWellKnownFallbackHeadTask:(id)arg1 withURL:(id)arg2;
- (void)noteDefinitiveAuthFailureFromTask:(id)arg1;
- (void)propFindTaskFinished:(id)arg1;
- (id)extractPrincipalURLFromPropFindTask:(id)arg1 error:(id *)arg2;
- (void)srvLookupTask:(id)arg1 error:(id)arg2;
- (void)completeOptionsTask:(id)arg1 error:(id)arg2;
- (void)startOptionsTask:(id)arg1;
- (void)getDiscoveryStatus:(id)arg1 priorFailed:(id *)arg2 subsequentFailed:(id *)arg3 priorIncomplete:(id *)arg4 subsequentIncomplete:(id *)arg5 priorSuccess:(id *)arg6 subsequentSuccess:(id *)arg7;
- (void)addToDiscoveryArray:(id *)arg1 discovery:(id)arg2;
- (void)optionsTask:(id)arg1 error:(id)arg2;
- (id)cleanedStringsFromResponseHeaders:(id)arg1 forHeader:(id)arg2;

@end
