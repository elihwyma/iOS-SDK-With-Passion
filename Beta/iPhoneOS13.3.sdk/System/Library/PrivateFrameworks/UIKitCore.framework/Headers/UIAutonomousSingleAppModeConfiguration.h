/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface UIAutonomousSingleAppModeConfiguration : NSObject <Swift>

{
    NSMutableDictionary *_propertiesAsDictionary;
    unsigned long long _style;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) _Bool allowsLockButton;
@property (nonatomic) _Bool allowsAutoLock;
@property (nonatomic) _Bool automaticallyRelaunchesAfterAppCrash;
@property (nonatomic, readonly) NSDictionary *propertiesAsDictionary;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationForStyle:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_boolValueForFeatureKey:(id)arg1;
- (void)_setBoolValue:(_Bool)arg1 forFeatureKey:(id)arg2;
- (_Bool)__gaxTrampoline_defaultBoolValueForFeatureKey:(id)arg1;

@end
