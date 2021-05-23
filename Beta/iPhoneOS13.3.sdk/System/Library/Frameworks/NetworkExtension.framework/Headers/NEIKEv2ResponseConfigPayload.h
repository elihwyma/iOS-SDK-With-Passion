/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2ConfigPayload.h>

@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ResponseConfigPayload : NEIKEv2ConfigPayload

{
    NEIKEv2ConfigurationMessage *_configurationRequest;
}

@property (retain) NEIKEv2ConfigurationMessage *configurationRequest;

- (_Bool)parsePayloadData;
- (id)initWithResponseConfigPayload:(id)arg1 configRequest:(id)arg2;

@end
