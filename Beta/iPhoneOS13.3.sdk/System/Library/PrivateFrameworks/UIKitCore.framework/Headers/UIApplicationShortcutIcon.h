/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class SBSApplicationShortcutIcon;

@interface UIApplicationShortcutIcon : NSObject <Swift>

{
    SBSApplicationShortcutIcon *_sbsShortcutIcon;
}

@property (nonatomic, readonly) SBSApplicationShortcutIcon *sbsShortcutIcon;

+ (_Bool)supportsSecureCoding;
+ (id)iconWithSystemImageName:(id)arg1;
+ (id)iconWithCustomImage:(id)arg1 isTemplate:(_Bool)arg2;
+ (id)iconWithTemplateImageName:(id)arg1;
+ (id)iconWithType:(long long)arg1;
+ (id)iconWithCustomImage:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSBSApplicationShortcutIcon:(id)arg1;

@end
