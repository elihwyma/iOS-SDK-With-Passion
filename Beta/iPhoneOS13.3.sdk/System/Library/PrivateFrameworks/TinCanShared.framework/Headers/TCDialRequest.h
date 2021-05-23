/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <TelephonyUtilities/TUDialRequest.h>

@interface TCDialRequest : TUDialRequest

{
    _Bool _remoteUplinkMuted;
    unsigned long long _state;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted;

- (id)initWithURL:(id)arg1;
- (id)URL;

@end
