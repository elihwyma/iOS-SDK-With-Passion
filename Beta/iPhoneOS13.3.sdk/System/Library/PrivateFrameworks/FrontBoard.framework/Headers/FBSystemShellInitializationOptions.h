/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@interface FBSystemShellInitializationOptions : NSObject

{
    _Bool _initializeReadyForInteraction;
    _Bool _isLegacyFBSystemApp;
    _Bool _shouldWaitForMigrator;
    _Bool _resetDarkBootState;
    double _systemSleepInterval;
    CDUnknownBlockType _registerServicesBlock;
    CDUnknownBlockType _registerPostCheckInPreServiceInitializationCallbackBlock;
    CDUnknownBlockType _registerLegacyPostInitCallbackBlock;
}

@property (nonatomic, readonly) _Bool _isLegacyFBSystemApp;
@property (copy, nonatomic, readonly) CDUnknownBlockType _registerPostCheckInPreServiceInitializationCallbackBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType _registerLegacyPostInitCallbackBlock;
@property (nonatomic, readonly) _Bool initializeReadyForInteraction;
@property (nonatomic, readonly) _Bool resetDarkBootState;
@property (nonatomic, readonly) _Bool shouldWaitForMigrator;
@property (nonatomic, readonly) double systemSleepInterval;
@property (copy, nonatomic, readonly) CDUnknownBlockType registerAdditionalServicesBlock;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_initWithOptions:(id)arg1;

@end
