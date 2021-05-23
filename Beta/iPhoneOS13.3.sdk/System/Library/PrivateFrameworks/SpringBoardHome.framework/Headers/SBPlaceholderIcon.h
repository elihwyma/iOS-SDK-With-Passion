/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIcon.h>

@class NSArray;

@interface SBPlaceholderIcon : SBIcon

{
    id _nodeIdentifier;
    SBIcon *_icon;
    NSArray *_icons;
}

@property (nonatomic, readonly) SBIcon *referencedIcon;
@property (copy, nonatomic, readonly) NSArray *referencedIcons;

+ (id)grabbedIconPlaceholderForIcon:(id)arg1;
+ (id)grabbedIconPlaceholderForIcons:(id)arg1;
+ (id)placeholderNodeIdentifierForIcon:(id)arg1;
+ (id)placeholderNodeIdentifierForIconNodeIdentifier:(id)arg1;
+ (_Bool)hasIconImage;
+ (id)placeholderForIcon:(id)arg1;

- (_Bool)isPlaceholder;
- (id)children;
- (id)nodeIdentifier;
- (id)automationID;
- (_Bool)referencesIcon:(id)arg1;
- (_Bool)referencesIconWithIdentifier:(id)arg1;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (_Bool)isUninstallSupported;
- (id)_initWithNodeIdentifier:(id)arg1 icon:(id)arg2;
- (id)_initWithNodeIdentifier:(id)arg1 icons:(id)arg2;
- (id)gridCellImage;

@end
