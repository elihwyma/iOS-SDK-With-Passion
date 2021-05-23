/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWHostEndpoint : NWEndpoint

@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) NSString *port;

+ (unsigned int)endpointType;
+ (id)endpointWithHostname:(id)arg1 port:(id)arg2;

- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;

@end
