/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NSURL, UIView;

@interface SBSAppDragLocalContext : NSObject

{
    _Bool _cancelsViaScaleAndFade;
    _Bool _sourceLocal;
    NSString *_applicationBundleIdentifier;
    NSSet *_launchActions;
    long long _startLocation;
    NSString *_draggedSceneIdentifier;
    NSURL *_launchURL;
    UIView *_portaledPreview;
}

@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic, readonly) NSSet *launchActions;
@property (nonatomic, readonly) long long startLocation;
@property (copy, nonatomic) NSString *draggedSceneIdentifier;
@property (copy, nonatomic) NSURL *launchURL;
@property (retain, nonatomic) UIView *portaledPreview;
@property (nonatomic) _Bool cancelsViaScaleAndFade;
@property (nonatomic, getter=isSourceLocal) _Bool sourceLocal;

- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithApplicationBundleIdentifier:(id)arg1 withLaunchActions:(id)arg2 startLocation:(long long)arg3;

@end
