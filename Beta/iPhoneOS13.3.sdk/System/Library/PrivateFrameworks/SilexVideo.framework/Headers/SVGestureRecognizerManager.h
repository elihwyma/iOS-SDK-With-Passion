/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol SVGestureRecognizerViewProviding;

@interface SVGestureRecognizerManager : NSObject

{
    NSMutableSet *_gestureRecognizers;
    id <SVGestureRecognizerViewProviding> _viewProvider;
}

@property (nonatomic, readonly) NSMutableSet *gestureRecognizers;
@property (nonatomic, readonly) id <SVGestureRecognizerViewProviding> viewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addGestureRecognizer:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)setupGestureRecognizers;
- (id)initWithViewProvider:(id)arg1;

@end
