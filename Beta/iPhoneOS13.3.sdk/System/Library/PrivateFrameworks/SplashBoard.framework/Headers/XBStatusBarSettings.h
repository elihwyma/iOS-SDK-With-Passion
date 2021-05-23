/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class BSMutableSettings, NSString;

@interface XBStatusBarSettings : NSObject

{
    BSMutableSettings *_settings;
}

@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly, getter=isBackgroundActivityEnabled) _Bool backgroundActivityEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)_initWithBSSettings:(id)arg1;

@end
