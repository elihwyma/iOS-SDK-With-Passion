/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIAppearance.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIPropertyBasedAppearance : _UIAppearance

{
    NSDictionary *_propertiesToMatch;
}

@property (retain, nonatomic, setter=_setPropertiesToMatch:) NSDictionary *_propertiesToMatch;

+ (id)_appearanceObjectKeyForProperties:(id)arg1;
+ (id)_appearanceMatchingProperties:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;

- (void)dealloc;
- (_Bool)_isValidAppearanceForCustomizableObject:(id)arg1;
- (_Bool)_isRecordingInvocations;

@end
