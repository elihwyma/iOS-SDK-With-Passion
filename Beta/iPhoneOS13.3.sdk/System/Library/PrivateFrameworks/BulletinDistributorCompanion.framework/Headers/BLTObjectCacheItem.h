/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@protocol NSSecureCoding;

@interface BLTObjectCacheItem : NSObject

{
    id <NSSecureCoding> _object;
    double _lastAccessedDate;
}

@property (nonatomic, readonly) id <NSSecureCoding> object;
@property (nonatomic, readonly) double lastAccessedDate;

+ (id)cacheItemWithObject:(id)arg1;

- (id)description;
- (id)initWithObject:(id)arg1;
- (void)touch;

@end
