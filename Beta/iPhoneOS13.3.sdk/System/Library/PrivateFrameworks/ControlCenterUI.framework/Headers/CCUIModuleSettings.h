/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

#import <ControlCenterUI/Swift-Protocol.h>

@interface CCUIModuleSettings : NSObject <Swift>

{
    struct CCUILayoutSize _portraitLayoutSize;
    struct CCUILayoutSize _landscapeLayoutSize;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CCUILayoutSize)layoutSizeForInterfaceOrientation:(long long)arg1;
- (id)initWithPortraitLayoutSize:(struct CCUILayoutSize)arg1 landscapeLayoutSize:(struct CCUILayoutSize)arg2;

@end
