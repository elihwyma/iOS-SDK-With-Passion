/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class ICSuzeLeaseSession;

@interface MPCSuzeLeaseSession : NSObject

{
    ICSuzeLeaseSession *_icSuzeLeaseSession;
}

@property (nonatomic, readonly) ICSuzeLeaseSession *icSuzeLeaseSession;

- (void)beginAutomaticallyRefreshingLease;
- (void)endAutomaticallyRefreshingLease;
- (id)initWithICSuzeLeaseSession:(id)arg1;

@end
