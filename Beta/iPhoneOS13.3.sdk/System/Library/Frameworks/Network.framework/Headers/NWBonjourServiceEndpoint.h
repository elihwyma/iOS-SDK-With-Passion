/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWBonjourServiceEndpoint : NWEndpoint

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *domain;

+ (unsigned int)endpointType;
+ (id)endpointWithName:(id)arg1 type:(id)arg2 domain:(id)arg3;

- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;

@end
