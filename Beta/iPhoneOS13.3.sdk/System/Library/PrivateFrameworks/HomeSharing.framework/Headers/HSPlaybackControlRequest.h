/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSRequest.h>

@interface HSPlaybackControlRequest : HSRequest

{
    unsigned int _interfaceID;
    long long _controlCommand;
}

@property (nonatomic, readonly) long long controlCommand;
@property (nonatomic, readonly) unsigned int interfaceID;

- (id)initWithInterfaceID:(unsigned int)arg1 controlCommand:(long long)arg2;

@end
