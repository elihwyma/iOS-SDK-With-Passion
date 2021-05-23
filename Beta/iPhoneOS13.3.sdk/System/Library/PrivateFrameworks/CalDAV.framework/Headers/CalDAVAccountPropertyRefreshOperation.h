/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/CalDAVOperation.h>

@protocol CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation

{
    _Bool _fetchPrincipalSearchProperties;
}

@property (nonatomic) id <CalDAVAccountPropertyRefreshDelegate> delegate;
@property (nonatomic) _Bool fetchPrincipalSearchProperties;

- (void)refreshProperties;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;

@end
