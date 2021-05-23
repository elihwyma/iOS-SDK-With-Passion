/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <BusinessChatService/Swift-Protocol.h>

@protocol BCSCloudServerRouteProvider <Swift>

- (unsigned short)container;
- (unsigned short)environment;
- (unsigned short)apiKey;
- (unsigned short)urlForLookupActionAPI;
- (unsigned short)urlForQueryActionAPI;

@end
