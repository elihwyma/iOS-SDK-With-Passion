/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class FBSSceneSettings, NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneCoordinateSpace : NSObject

{
    FBSSceneSettings *_effectiveSettings;
    UIWindowScene *_windowScene;
}

@property (nonatomic, readonly) struct CGRect bounds;
@property (weak, nonatomic, readonly) UIWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (id)initWithWindowScene:(id)arg1 effectiveSettings:(id)arg2;

@end
