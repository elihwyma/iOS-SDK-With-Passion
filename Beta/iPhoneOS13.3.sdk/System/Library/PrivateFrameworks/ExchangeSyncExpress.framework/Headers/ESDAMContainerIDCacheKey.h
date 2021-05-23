/*
 Image: /System/Library/PrivateFrameworks/ExchangeSyncExpress.framework/ExchangeSyncExpress
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ESDAMContainerIDCacheKey : NSObject

{
    NSString *_accountID;
    long long _dataclass;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) long long dataclass;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2;

@end
