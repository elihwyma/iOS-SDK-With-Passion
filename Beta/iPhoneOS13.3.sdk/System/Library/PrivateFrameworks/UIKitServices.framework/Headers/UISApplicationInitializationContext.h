/*
 Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

#import <Foundation/NSObject.h>

@class FBSSceneIdentityToken, NSSet, NSString, UISDeviceContext, UISDisplayContext;

@interface UISApplicationInitializationContext : NSObject

{
    UISDisplayContext *_displayContext;
    UISDeviceContext *_deviceContext;
    NSSet *_persistedSceneIdentifiers;
    FBSSceneIdentityToken *_defaultSceneToken;
}

@property (nonatomic, readonly) UISDisplayContext *displayContext;
@property (nonatomic, readonly) UISDeviceContext *deviceContext;
@property (nonatomic, readonly) NSSet *persistedSceneIdentifiers;
@property (nonatomic, readonly) FBSSceneIdentityToken *defaultSceneToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultContext;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithDisplayContext:(id)arg1 deviceContext:(id)arg2 persistedSceneIdentifiers:(id)arg3;
- (id)initWithUISApplicationInitializationContext:(id)arg1;

@end
