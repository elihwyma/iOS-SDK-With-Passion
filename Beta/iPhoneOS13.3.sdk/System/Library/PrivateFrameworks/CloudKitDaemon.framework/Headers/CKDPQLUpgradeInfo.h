/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKDPQLUpgradeInfo : NSObject

{
    _Bool _shouldVacuum;
    _Bool _shouldTruncateDatabase;
    unsigned long long _version;
    CDUnknownFunctionPointerType _upgradeFunction;
}

@property (nonatomic) unsigned long long version;
@property (nonatomic) CDUnknownFunctionPointerType upgradeFunction;
@property (nonatomic) _Bool shouldVacuum;
@property (nonatomic) _Bool shouldTruncateDatabase;

+ (id)upgradeInfoWithVersion:(unsigned long long)arg1 function:(CDUnknownFunctionPointerType)arg2 shouldVacuum:(_Bool)arg3 shouldTruncate:(_Bool)arg4;

- (id)initWithVersion:(unsigned long long)arg1 function:(CDUnknownFunctionPointerType)arg2 shouldVacuum:(_Bool)arg3 shouldTruncate:(_Bool)arg4;

@end
