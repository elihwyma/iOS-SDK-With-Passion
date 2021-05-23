/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class MTIDFileStorage, MTIDMemoryStorage;

@interface MTIDManager : NSObject

{
    MTIDFileStorage *_deviceStorage;
    MTIDFileStorage *_appStorage;
    MTIDMemoryStorage *_sessionStorage;
}

@property (retain, nonatomic) MTIDFileStorage *deviceStorage;
@property (retain, nonatomic) MTIDFileStorage *appStorage;
@property (retain, nonatomic) MTIDMemoryStorage *sessionStorage;

+ (id)shared;

- (id)storageForNamespace:(id)arg1;
- (id)createNamespace:(id)arg1 options:(id)arg2;
- (id)deleteNamespace:(id)arg1;
- (id)valueForNamespace:(id)arg1 options:(id)arg2 cachePolicy:(long long)arg3;
- (id)IDInfoForNamespace:(id)arg1 cachePolicy:(long long)arg2;
- (id)createNamespace:(id)arg1;
- (id)IDInfoForNamespace:(id)arg1;
- (id)IDForNamespace:(id)arg1;
- (id)resetIDForNamespace:(id)arg1;

@end
