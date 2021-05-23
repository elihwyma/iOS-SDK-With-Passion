/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class NSDictionary, _CDClientContext, _CDContextualChangeRegistration, _CDContextualKeyPath, _CDContextualPredicate;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SunriseSunsetProvider : NSObject

{
    _CDClientContext *_duetContextStore;
    _CDContextualKeyPath *_duetKeyPath;
    _CDContextualChangeRegistration *_duetRegistration;
    NSDictionary *_duetInfo;
    NSObject<OS_dispatch_semaphore> *_duetDispatchSemaphore;
    _Bool _sunriseSunsetNotificationEnabled;
    CDUnknownBlockType _callbackBlock;
    CDUnknownBlockType _duetCallback;
    _CDContextualPredicate *_predicate;
    int _logLevel;
}

@property int logLevel;

- (void)dealloc;
- (void)cancel;
- (id)initWithCallback:(CDUnknownBlockType)arg1;
- (void)unregisterBlock;
- (void)registerBlock:(CDUnknownBlockType)arg1;
- (id)copySunriseSunsetInfo:(int)arg1;
- (void)updateSunriseSunsetInfo;
- (void)unregisterNotification;
- (id)copySunsetSunriseInfoFromContext;

@end
