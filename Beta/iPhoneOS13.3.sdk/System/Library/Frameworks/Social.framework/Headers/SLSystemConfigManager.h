/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SLSystemConfigManager : NSObject

{
    void *_prefs;
    _Bool _notifyForExternalChangeOnly;
    int _applySkipCount;
    NSString *_serviceType;
}

+ (id)sharedInstanceForCallbackWhileLocked:(void *)arg1;
+ (id)sharedInstanceForServiceType:(id)arg1;

- (void)dealloc;
- (void)_keepAlive;
- (void)_tearDown;
- (void *)_getValueForKey:(id)arg1;
- (void)_setValue:(void *)arg1 forKey:(id)arg2;
- (id)initWithServiceType:(id)arg1;
- (void)_notifyTarget:(unsigned int)arg1;
- (void)_initializeSystemConfigPrefs:(id)arg1;
- (void)_synchronize;
- (void)_setCallback:(CDUnknownFunctionPointerType)arg1 withContext:(CDStruct_4210025a *)arg2;
- (void)_refresh;
- (void)setCachedUsername:(id)arg1;
- (id)cachedUsername;

@end
