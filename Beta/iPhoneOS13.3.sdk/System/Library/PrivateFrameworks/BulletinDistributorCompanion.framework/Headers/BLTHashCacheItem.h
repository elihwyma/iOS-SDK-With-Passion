/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface BLTHashCacheItem : NSObject

{
    NSData *_MD5;
    NSString *_identifier;
    NSData *_data;
    NSURL *_url;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *identifier;

+ (id)hashCacheItemWithData:(id)arg1 URL:(id)arg2 identifier:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)MD5;
- (_Bool)isEqualToItem:(id)arg1;
- (id)initWithURL:(id)arg1 data:(id)arg2 identifier:(id)arg3;

@end
