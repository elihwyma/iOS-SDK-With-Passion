/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSMutableSet;

@protocol CalDAVPrincipal;

@interface CalDAVOperation : CoreDAVTaskGroup

{
    _Bool _isCancellingTaskGroups;
    id <CalDAVPrincipal> _principal;
    NSMutableSet *_outstandingTaskGroups;
}

@property (retain, nonatomic) id <CalDAVPrincipal> principal;
@property (retain, nonatomic) NSMutableSet *outstandingTaskGroups;

- (id)init;
- (void)dealloc;
- (void)cancelTaskGroup;
- (id)initWithPrincipal:(id)arg1;
- (void)_tearDownAllTaskGroupsWithBlock:(CDUnknownBlockType)arg1;
- (void)bailWithError:(id)arg1;

@end
