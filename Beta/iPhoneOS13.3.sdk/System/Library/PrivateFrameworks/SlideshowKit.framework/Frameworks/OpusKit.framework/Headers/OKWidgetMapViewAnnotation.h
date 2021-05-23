/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <MapKit/MKPointAnnotation.h>

@class NSString;

@interface OKWidgetMapViewAnnotation : MKPointAnnotation

{
    NSString *_identifier;
    NSString *_actionScript;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *actionScript;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;

@end
