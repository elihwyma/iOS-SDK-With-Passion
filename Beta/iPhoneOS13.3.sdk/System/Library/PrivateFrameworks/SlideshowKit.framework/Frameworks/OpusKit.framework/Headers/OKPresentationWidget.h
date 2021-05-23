/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKPresentationCanvas.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface OKPresentationWidget : OKPresentationCanvas

{
    NSString *_templateName;
    NSString *_internalName;
    NSString *_internalClassName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
    NSMutableArray *_internalSubWidgets;
    NSMutableArray *_internalMaterials;
    NSString *_className;
    NSMutableArray *_subWidgets;
    NSMutableArray *_materials;
}

@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic, readonly) NSMutableArray *subWidgets;
@property (copy, nonatomic) NSMutableArray *materials;

+ (id)widgetWithName:(id)arg1 templateName:(id)arg2 className:(id)arg3 settings:(id)arg4 userData:(id)arg5 subWidgets:(id)arg6 materials:(id)arg7;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (id)parentPage;
- (id)materialWithName:(id)arg1;
- (void)resolveIfNeeded;
- (id)canvasWithName:(id)arg1;
- (id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andParent:(id)arg3;
- (id)subWidgetWithName:(id)arg1;
- (id)parentWidget;
- (id)widgetTemplate;

@end
