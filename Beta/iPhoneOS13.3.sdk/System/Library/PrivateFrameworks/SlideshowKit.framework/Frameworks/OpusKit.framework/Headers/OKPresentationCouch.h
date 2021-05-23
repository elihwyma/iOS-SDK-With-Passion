/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKPresentationCanvas.h>

@class NSMutableArray, NSMutableDictionary, NSString, OKPresentationCouchStep;

@interface OKPresentationCouch : OKPresentationCanvas

{
    NSString *_restartScript;
    NSMutableArray *_steps;
    NSMutableDictionary *_internalSettings;
    OKPresentationCouchStep *_loopStep;
}

@property (copy, nonatomic, readonly) NSMutableArray *steps;
@property (copy, nonatomic) NSString *restartScript;
@property (retain, nonatomic) OKPresentationCouchStep *loopStep;

+ (id)couchWithName:(id)arg1 settings:(id)arg2 steps:(id)arg3 restartScript:(id)arg4;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (double)duration;
- (void)addStep:(id)arg1;
- (void)resolveIfNeeded;
- (id)canvasWithName:(id)arg1;
- (id)closestStepForPageName:(id)arg1;
- (id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3;
- (id)lastStepForPageName:(id)arg1;
- (id)nextStepAfterStep:(id)arg1 canLoop:(_Bool)arg2;

@end
