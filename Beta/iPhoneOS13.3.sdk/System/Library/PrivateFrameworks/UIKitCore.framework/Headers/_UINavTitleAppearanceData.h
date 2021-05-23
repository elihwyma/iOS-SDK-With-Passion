/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarAppearanceData.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UINavTitleAppearanceData : _UIBarAppearanceData

{
    NSDictionary *_titleTextAttributes;
    NSDictionary *_largeTitleTextAttributes;
    struct UIOffset _titlePositionAdjustment;
}

@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) struct UIOffset titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes;

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)standardTitleData;

- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (void)describeInto:(id)arg1;
- (id)replicate;
- (long long)hashInto:(long long)arg1;
- (_Bool)checkEqualTo:(id)arg1;

@end
