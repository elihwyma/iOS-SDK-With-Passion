/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface _CDBatterySaver : NSObject

{
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;
+ (id)batterySaver;

- (id)init;
- (void)dealloc;
- (long long)setMode:(long long)arg1;
- (void)setPowerMode:(long long)arg1 fromSource:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)setPowerMode:(long long)arg1 fromSource:(id)arg2;
- (void)setPowerMode:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)setPowerMode:(long long)arg1 error:(id *)arg2;
- (long long)getPowerMode;

@end
