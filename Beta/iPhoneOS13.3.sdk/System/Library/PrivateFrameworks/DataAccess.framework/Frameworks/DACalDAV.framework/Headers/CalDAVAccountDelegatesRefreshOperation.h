/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <CalDAV/CalDAVOperation.h>

@protocol CalDAVAccountDelegatesRefreshDelegate;

@interface CalDAVAccountDelegatesRefreshOperation : CalDAVOperation

{
    id <CalDAVAccountDelegatesRefreshDelegate> _mdelegate;
}

@property (nonatomic) id <CalDAVAccountDelegatesRefreshDelegate> mdelegate;

- (void)refreshDelegates;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;

@end
