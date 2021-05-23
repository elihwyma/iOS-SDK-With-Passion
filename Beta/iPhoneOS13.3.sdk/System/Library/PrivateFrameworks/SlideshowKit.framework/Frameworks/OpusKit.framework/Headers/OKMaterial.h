/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSString, OKPresentationMaterial;

@protocol OKWidgetProtocol;

@interface OKMaterial : NSObject

{
    OKPresentationMaterial *_material;
    _Bool _needsApplySettings;
    _Bool _hasSettingsApplied;
    id <OKWidgetProtocol> _parentWidget;
}

@property (nonatomic) id <OKWidgetProtocol> parentWidget;
@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (void)load;
- (void)unload;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (void)setNeedsApplySettings;
- (void)applySettingsIfNeeded;
- (void)applySettings;
- (id)initWithMaterial:(id)arg1;

@end
