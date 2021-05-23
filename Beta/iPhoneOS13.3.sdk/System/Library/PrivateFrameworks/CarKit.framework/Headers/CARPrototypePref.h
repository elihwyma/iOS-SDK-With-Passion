/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class NSString;

@interface CARPrototypePref : NSObject

{
    NSString *_domain;
    NSString *_key;
    NSString *_title;
    id _defaultValue;
    CDUnknownBlockType _valueChangedBlock;
}

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id defaultValue;
@property (copy, nonatomic) CDUnknownBlockType valueChangedBlock;
@property (copy, nonatomic) id value;
@property (nonatomic, readonly) id valueOrDefault;
@property (nonatomic) _Bool state;
@property (copy, nonatomic) id cachedValue;
@property (nonatomic, readonly) id cachedValueOrDefault;
@property (nonatomic) _Bool cachedState;
@property (copy, nonatomic) id internalSettingsValue;
@property (nonatomic) _Bool internalSettingsState;

+ (id)contentSize;
+ (id)interfaceStyle;
+ (id)showPrototypeApps;
+ (void)setConfirmedSafe:(_Bool)arg1;
+ (id)_qaModeLockout;
+ (id)prototypePrefs;
+ (id)prefWithDomain:(id)arg1 key:(id)arg2 title:(id)arg3 defaultValue:(id)arg4 valueChangedBlock:(CDUnknownBlockType)arg5;
+ (id)_confirmedSafe;
+ (void)setPrototypePrefCache:(id)arg1;
+ (id)prototypePrefCache;
+ (_Bool)confirmedSafe;
+ (_Bool)showTrustedLockout;
+ (_Bool)qaModeLockout;
+ (void)setQaModeLockout:(_Bool)arg1;
+ (id)showInternalApps;
+ (id)nowPlayingAlbumArt;
+ (id)showInternalSettings;
+ (id)smartWidgetDebugShowScore;
+ (id)smartWidgetDebugGestures;
+ (id)smartWidgetRelaxHomeInRangeCheck;

- (id)description;

@end
