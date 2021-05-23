/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class CALayer, NSData, NSDictionary, NSString, OKWidgetMicaView, OKWidgetMicaViewProxy;

@interface OKWidgetMicaDocument : NSObject

{
    NSData *_data;
    NSDictionary *_rootDictionary;
    CALayer *_rootLayer;
    NSDictionary *_publishedObjects;
    OKWidgetMicaView *_widgetMicaView;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *rootDictionary;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSDictionary *publishedObjects;
@property (nonatomic) OKWidgetMicaViewProxy *widgetMicaView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)publishedObjectWithName:(id)arg1;
- (id)publishedObjectNames;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (double)documentWidth;
- (double)documentHeight;
- (void)applySettings:(id)arg1 withResolution:(id)arg2;
- (void)loadMicaDocument;
- (id)settingsForKey:(id)arg1;

@end
