/*
 Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
 */

#import <Foundation/NSObject.h>

@class MechanismContext, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface MechanismManager : NSObject

{
    NSMutableDictionary *_plugins;
    MechanismContext *_mechanismContext;
    NSObject<OS_dispatch_queue> *_serverQueue;
    long long _evaluatedPolicy;
}

@property (nonatomic, readonly) long long evaluatedPolicy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

- (id)init;
- (id)loadMechanism:(long long)arg1 initParams:(id)arg2 request:(id)arg3 className:(id)arg4 error:(id *)arg5;
- (void)_logClass:(Class)arg1 tag:(id)arg2 level:(int)arg3;
- (_Bool)_preloadForPlugin:(long long)arg1 className:(id)arg2 userId:(id)arg3 error:(id *)arg4;
- (id)_pathForPlugin:(long long)arg1 error:(id *)arg2;
- (void)_logClass:(Class)arg1 tag:(id)arg2;
- (id)loadMechanism:(long long)arg1 initParams:(id)arg2 request:(id)arg3 error:(id *)arg4;

@end
