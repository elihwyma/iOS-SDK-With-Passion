/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSMutableSettings, BSSettings, NSNumber, NSString, _UILegibilitySettings;

@interface SBAppStatusBarSettings : NSObject <Swift>

{
    BSMutableSettings *_settings;
}

@property (nonatomic, readonly, getter=_BSSettings) BSSettings *BSSettings;
@property (nonatomic, readonly) NSNumber *alpha;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) int styleOverridesToCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)_initWithBSSettings:(id)arg1;

@end
