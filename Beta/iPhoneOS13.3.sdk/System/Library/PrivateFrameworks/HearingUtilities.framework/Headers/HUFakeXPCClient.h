/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <HCXPCClient.h>

@interface HUFakeXPCClient : HCXPCClient

{
    CDUnknownBlockType _updateBlock;
}

- (_Bool)sendMessage:(id)arg1 withError:(id *)arg2;
- (_Bool)wantsUpdatesForIdentifier:(unsigned long long)arg1;
- (void)registerMessageBlock:(CDUnknownBlockType)arg1;

@end
