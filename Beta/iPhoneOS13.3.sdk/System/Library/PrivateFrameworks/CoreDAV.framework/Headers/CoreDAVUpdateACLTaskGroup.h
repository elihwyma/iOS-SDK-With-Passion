/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class CoreDAVPropFindTask, NSSet, NSString, NSURL;

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup

{
    int _state;
    NSSet *_aceItems;
    NSURL *_url;
    CoreDAVPropFindTask *_fetchTask;
}

@property (retain, nonatomic) NSSet *aceItems;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) CoreDAVPropFindTask *fetchTask;
@property (nonatomic) int state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 aceItems:(id)arg2 url:(id)arg3 taskManager:(id)arg4;
- (void)_startGetACL;
- (void)_startSetACLWithAccessControlEntities:(id)arg1;

@end
