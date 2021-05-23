/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSPointerArray, UIViewController;

@protocol PHAirPlayControllerContentProvider;

__attribute__((visibility("hidden")))
@interface PUAirPlayContentRegistry : NSObject

{
    id <PHAirPlayControllerContentProvider> _currentContentProvider;
    NSPointerArray *__contentProviders;
    UIViewController *__cachedCurrentContent;
}

@property (retain, nonatomic, setter=_setContentProviders:) NSPointerArray *_contentProviders;
@property (retain, nonatomic, setter=_setCachedCurrentContent:) UIViewController *_cachedCurrentContent;
@property (nonatomic, setter=_setCurrentContentProvider:) id <PHAirPlayControllerContentProvider> currentContentProvider;

- (id)init;
- (void)addContentProvider:(id)arg1;
- (void)removeContentProvider:(id)arg1;
- (unsigned long long)_indexOfContentProvider:(id)arg1;
- (void)_invalidateCurrentContent;
- (void)_updateCurrentContentProvider;
- (id)contentForController:(id)arg1;
- (void)clearContent;

@end
