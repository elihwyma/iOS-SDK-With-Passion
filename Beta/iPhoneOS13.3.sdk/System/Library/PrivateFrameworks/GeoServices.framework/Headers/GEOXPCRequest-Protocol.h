/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEOXPCRequest <Swift>

+ (unsigned short)replyClass;

- (unsigned short)isValid;
- (unsigned short)expectsReply;

@end
