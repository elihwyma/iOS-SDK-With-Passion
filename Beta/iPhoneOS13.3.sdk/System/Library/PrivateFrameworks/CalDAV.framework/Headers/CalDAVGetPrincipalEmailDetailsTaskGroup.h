/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/Swift-Protocol.h>

@class CalDAVPrincipalEmailDetailsResult, NSSet, NSString, NSURL;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <Swift>

{
    NSURL *_principalURL;
    CalDAVPrincipalEmailDetailsResult *_principalResult;
}

@property (retain, nonatomic) CalDAVPrincipalEmailDetailsResult *principalResult;
@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic, readonly) NSString *displayName;
@property (retain, nonatomic, readonly) NSSet *addresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_finishWithError:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (void)_processPropFind:(id)arg1;

@end
