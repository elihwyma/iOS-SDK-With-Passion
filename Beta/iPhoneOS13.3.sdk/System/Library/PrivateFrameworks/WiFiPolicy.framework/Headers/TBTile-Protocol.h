/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@class NSDate, NSString;

@protocol TBTile <Swift>

@property (nonatomic, readonly) unsigned long long key;
@property (copy, nonatomic, readonly) NSDate *created;
@property (retain, nonatomic) NSString *etag;

@end
