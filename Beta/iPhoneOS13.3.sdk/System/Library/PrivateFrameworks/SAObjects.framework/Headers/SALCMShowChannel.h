/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SALCMTvChannel;

@interface SALCMShowChannel : SABaseClientBoundCommand

@property (retain, nonatomic) SALCMTvChannel *channel;

+ (id)showChannel;
+ (id)showChannelWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
