/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCEndpointConfiguration : NSObject

{
    NSString *_clientAPIBaseURLString;
    NSString *_notificationsBaseURLString;
    NSString *_staticAssetBaseUrlString;
    NSString *_remoteDataSourceBaseUrlString;
}

@property (nonatomic, readonly) NSString *clientAPIBaseURLString;
@property (nonatomic, readonly) NSString *notificationsBaseURLString;
@property (nonatomic, readonly) NSString *staticAssetBaseUrlString;
@property (nonatomic, readonly) NSString *remoteDataSourceBaseUrlString;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseUrlString:(id)arg3 remoteDataSourceBaseUrl:(id)arg4;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2;

@end
