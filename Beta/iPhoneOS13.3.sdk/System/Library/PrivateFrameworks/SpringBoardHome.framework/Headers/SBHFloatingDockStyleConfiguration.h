/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@interface SBHFloatingDockStyleConfiguration : NSObject

{
    _Bool _wantsPlatterShadow;
    unsigned long long _backgroundEffect;
    unsigned long long _platterEffect;
    unsigned long long _folderIconBackgroundStyle;
}

@property (nonatomic, readonly) unsigned long long backgroundEffect;
@property (nonatomic, readonly) unsigned long long platterEffect;
@property (nonatomic, readonly) unsigned long long folderIconBackgroundStyle;
@property (nonatomic, readonly) _Bool wantsPlatterShadow;

+ (id)defaultConfiguration;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBackgroundEffect:(unsigned long long)arg1 platterEffect:(unsigned long long)arg2 wantsPlatterShadow:(_Bool)arg3 folderIconBackgroundStyle:(unsigned long long)arg4;
- (id)configurationWithWantsPlatterShadow:(_Bool)arg1;

@end
