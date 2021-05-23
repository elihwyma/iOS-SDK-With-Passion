/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class CALayer, NSString, OKWidgetMicaDocument;

@interface OKWidgetCALayerProxy : NSObject

{
    CALayer *_layer;
    OKWidgetMicaDocument *_widgetMicaDocument;
}

@property (retain, nonatomic, readonly) CALayer *layer;
@property (nonatomic) OKWidgetMicaDocument *widgetMicaDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)proxyForLayer:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (void)setSettingContents:(id)arg1;

@end
