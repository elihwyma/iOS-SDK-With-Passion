/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKPresentationCanvas.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface OKPresentationNavigator : OKPresentationCanvas

{
    NSString *_className;
    NSMutableArray *_pagesNames;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
}

@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic, readonly) NSMutableArray *pagesNames;

+ (id)navigatorWithName:(id)arg1 className:(id)arg2 pagesNames:(id)arg3 settings:(id)arg4 userData:(id)arg5;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (id)pages;
- (id)parentPage;
- (void)resolveIfNeeded;
- (id)canvasWithName:(id)arg1;
- (id)pageWithName:(id)arg1;
- (id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3 andParent:(id)arg4;
- (void)addPageName:(id)arg1;

@end
