/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKPresentationCanvas.h>

@class NSArray, NSMutableDictionary, NSString;

@interface OKPresentationCouchStep : OKPresentationCanvas

{
    NSMutableDictionary *_internalSettings;
    _Bool _ignoresBusiness;
    NSString *_anchorPage;
    NSString *_script;
    double _duration;
    NSArray *_dependencies;
}

@property (readonly) NSString *anchorPage;
@property (readonly) NSString *script;
@property (readonly) double duration;
@property (nonatomic) _Bool ignoresBusiness;
@property (copy, nonatomic) NSArray *dependencies;

+ (id)couchStepWithAnchorPageName:(id)arg1 script:(id)arg2 duration:(double)arg3 settings:(id)arg4;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (void)resolveIfNeeded;
- (id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andCouch:(id)arg3;
- (id)parentCouch;

@end
