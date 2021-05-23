/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKPresentationCanvas.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface OKPresentationPage : OKPresentationCanvas

{
    NSString *_templateName;
    NSString *_internalNavigatorName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
    NSMutableArray *_internalWidgets;
    NSString *_navigatorName;
    NSMutableArray *_widgets;
}

@property (copy, nonatomic) NSString *navigatorName;
@property (copy, nonatomic, readonly) NSMutableArray *widgets;

+ (id)pageWithName:(id)arg1 templateName:(id)arg2 navigatorName:(id)arg3 properties:(id)arg4 settings:(id)arg5 userData:(id)arg6 widgets:(id)arg7;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (id)navigator;
- (void)resolveIfNeeded;
- (id)canvasWithName:(id)arg1;
- (id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3 andParent:(id)arg4;
- (id)widgetWithName:(id)arg1;
- (id)parentNavigator;
- (id)pageTemplate;

@end
