/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class ICSuzeLeaseSession, MPCSuzeLeaseSession;

@interface _MPCSuzeLeaseSessionInfo : NSObject

{
    _Bool _shouldStopWhenFinished;
    long long _clientCount;
    ICSuzeLeaseSession *_icLeaseSession;
    MPCSuzeLeaseSession *_mpcLeaseSession;
}

@property (nonatomic) long long clientCount;
@property (nonatomic, readonly) ICSuzeLeaseSession *icLeaseSession;
@property (nonatomic, readonly) MPCSuzeLeaseSession *mpcLeaseSession;
@property (nonatomic) _Bool shouldStopWhenFinished;

- (id)initWithICLeaseSession:(id)arg1;

@end
