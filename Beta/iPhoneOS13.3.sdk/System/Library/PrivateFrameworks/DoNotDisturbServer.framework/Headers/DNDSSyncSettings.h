/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@interface DNDSSyncSettings : NSObject

{
    _Bool _syncEnabled;
}

@property (nonatomic, readonly, getter=isSyncEnabled) _Bool syncEnabled;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSyncEnabled:(_Bool)arg1;

@end
