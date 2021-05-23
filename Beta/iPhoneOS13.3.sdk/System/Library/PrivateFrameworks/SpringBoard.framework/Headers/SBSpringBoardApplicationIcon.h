/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardHome/SBLeafIcon.h>

@interface SBSpringBoardApplicationIcon : SBLeafIcon

{
    long long _interfaceStyle;
}

- (id)init;
- (id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2;
- (id)displayNameForLocation:(id)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (_Bool)canTruncateLabel;
- (_Bool)canTightenLabel;
- (_Bool)isUninstallSupported;
- (id)initWithInterfaceStyle:(long long)arg1;
- (id)_generateImageWithInfo:(struct SBIconImageInfo)arg1;

@end
