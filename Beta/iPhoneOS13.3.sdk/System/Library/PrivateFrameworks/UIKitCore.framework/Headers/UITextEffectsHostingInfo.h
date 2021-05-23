/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIWindowScene;

@interface UITextEffectsHostingInfo : NSObject

{
    unsigned long long _hostedUseCount;
    UIWindowScene *_scene;
    NSDictionary *_perSceneOptions;
}

@property (retain, nonatomic) NSDictionary *perSceneOptions;
@property (retain, nonatomic) UIWindowScene *scene;
@property (nonatomic) _Bool useHostedInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) UIWindowScene *_intendedCanvas;
@property (readonly) NSDictionary *_options;

+ (id)hostingInfoForWindowScene:(id)arg1;

- (_Bool)_matchingOptions:(id)arg1;
- (id)_initWithCanvas:(id)arg1 options:(id)arg2;

@end
