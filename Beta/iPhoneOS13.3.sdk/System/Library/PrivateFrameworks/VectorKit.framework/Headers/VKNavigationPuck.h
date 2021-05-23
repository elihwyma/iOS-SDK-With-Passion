/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString, VKTimedAnimation;

@protocol VKAnnotation;

@interface VKNavigationPuck : NSObject

{
    id <VKAnnotation> _annotation;
    _Bool _tracking;
    _Bool _animatingToCoordinate;
    _Bool _stale;
    VKTimedAnimation *_puckStyleAnimation;
    struct AnimationRunner *_animationRunner;
    struct NavigationPuck *_navigationPuck;
}

@property (retain, nonatomic) id <VKAnnotation> annotation;
@property (nonatomic) CDStruct_c3b9c2ee presentationCoordinate;
@property (nonatomic) double presentationCourse;
@property (nonatomic) int mode;
@property (nonatomic) _Bool tracking;
@property (nonatomic) _Bool animatingToCoordinate;
@property (nonatomic) _Bool showCourse;
@property (nonatomic) _Bool stale;
@property (nonatomic) float scale;
@property (nonatomic) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)runAnimation:(id)arg1;
- (id)initWithAnimationRunner:(struct AnimationRunner *)arg1;
- (void)destroyAnimationRunner;
- (struct NavigationPuck *)puck;

@end
