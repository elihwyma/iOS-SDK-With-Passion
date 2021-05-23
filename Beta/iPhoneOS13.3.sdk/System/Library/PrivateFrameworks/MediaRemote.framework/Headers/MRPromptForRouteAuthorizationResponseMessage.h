/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRPromptForRouteAuthorizationResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *response;

- (unsigned long long)type;
- (id)initWithResponse:(id)arg1;

@end
