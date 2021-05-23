/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerSlide : NSObject

{
    int _slide;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)initWithSlide:(int)arg1;
- (id)placementForSlideStart:(_Bool)arg1;

@end
