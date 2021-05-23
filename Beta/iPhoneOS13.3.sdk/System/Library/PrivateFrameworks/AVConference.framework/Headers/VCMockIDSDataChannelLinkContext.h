/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <IDS/IDSDataChannelLinkContext.h>

__attribute__((visibility("hidden")))
@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext

{
    _Bool _forceNetworkCellular;
}

- (id)init;
- (unsigned int)RATType;
- (unsigned int)remoteRATType;

@end
