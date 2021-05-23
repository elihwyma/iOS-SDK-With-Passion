/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

#import <WiFiPolicy/Swift-Protocol.h>

@class NSDate, NSString;

@interface TBFetchedTile : NSObject <Swift>

{
    unsigned long long _key;
    NSString *_etag;
    NSDate *_created;
}

@property (nonatomic) unsigned long long key;
@property (copy, nonatomic) NSDate *created;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *etag;

+ (id)fetchedTileWithKey:(unsigned long long)arg1 etag:(id)arg2 created:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(unsigned long long)arg1 etag:(id)arg2 created:(id)arg3;
- (_Bool)_isEqualToFetchedTile:(id)arg1;

@end
