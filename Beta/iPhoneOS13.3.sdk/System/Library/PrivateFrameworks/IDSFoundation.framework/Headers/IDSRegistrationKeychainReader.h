/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IMTimer, NSMutableArray;

@interface IDSRegistrationKeychainReader : NSObject

{
    NSMutableArray *_registrationData;
    IMTimer *_purgeTimer;
    CDUnknownBlockType _purgeCancelBlock;
    CDUnknownBlockType _purgeEnqueueBlock;
}

+ (id)sharedInstance;
+ (id)keychainServiceForVersion:(unsigned long long)arg1;
+ (id)keychainAccountForVersion:(unsigned long long)arg1;
+ (id)keychainAccessGroupForVersion:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (void)_flush;
- (void)flushCache;
- (id)registrationWithServiceType:(id)arg1 accountType:(int)arg2 value:(id)arg3;
- (void)_reloadFromKeychainLocked;
- (void)_setPurgeTimer;
- (void)_reloadFromDictionaryLocked:(id)arg1;
- (id)registrationData;

@end
