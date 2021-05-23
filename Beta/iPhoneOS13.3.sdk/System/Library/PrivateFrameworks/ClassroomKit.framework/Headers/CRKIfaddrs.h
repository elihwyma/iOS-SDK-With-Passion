/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKIfaddrs : NSObject

{
    struct ifaddrs *mIfaddrs;
}

@property (nonatomic, readonly, getter=isInternetInterface) _Bool internetInterface;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *IPAddress;
@property (nonatomic, readonly) CRKIfaddrs *next;

- (id)initWithIfaddrs:(struct ifaddrs *)arg1;

@end
