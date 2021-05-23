/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, OKPresentation;

@interface OKPresentationCanvas : NSObject

{
    OKPresentation *_presentation;
    id _parent;
    NSString *_name;
    NSString *_uuid;
    NSMutableDictionary *_settings;
    NSMutableDictionary *_userSettings;
    NSMutableDictionary *_userData;
    NSMutableDictionary *_properties;
    _Bool _isTemplate;
    _Bool _isResolved;
}

@property (copy, nonatomic, readonly) NSString *uuid;
@property (nonatomic) OKPresentation *presentation;
@property (nonatomic) id parent;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic, readonly) NSMutableDictionary *settings;
@property (copy, nonatomic, readonly) NSMutableDictionary *userSettings;
@property (copy, nonatomic, readonly) NSMutableDictionary *userData;
@property (copy, nonatomic) NSMutableDictionary *properties;
@property (nonatomic) _Bool isTemplate;
@property (nonatomic) _Bool isResolved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (id)keyPath;
- (void)resolveIfNeeded;
- (id)canvasWithName:(id)arg1;
- (void)_setSettingsObject:(id)arg1 forKey:(id)arg2;
- (void)setSettingsObject:(id)arg1 forKeyPath:(id)arg2;
- (void)_setUserDataObject:(id)arg1 forKey:(id)arg2;
- (void)setUserDataObject:(id)arg1 forKeyPath:(id)arg2;
- (void)_setPropertiesObject:(id)arg1 forKey:(id)arg2;
- (void)setPropertiesObject:(id)arg1 forKeyPath:(id)arg2;
- (void)parentApplyValueForKeyPath:(id)arg1;
- (id)mergedSettings;
- (void)addSettingsFromDictionary:(id)arg1;

@end
