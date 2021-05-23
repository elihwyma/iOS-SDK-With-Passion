/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BKSDisplayRenderOverlayDescriptor, NSString, NSURL;

@interface SBRestartTransitionRequest : NSObject <Swift>

{
    NSString *_requester;
    NSString *_reason;
    int _restartType;
    double _delay;
    _Bool _wantsPersistentSnapshot;
    BKSDisplayRenderOverlayDescriptor *_customOverlayDescriptor;
    NSURL *_applicationLaunchURL;
}

@property (copy, nonatomic) NSString *requester;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) int restartType;
@property (nonatomic) double delay;
@property (nonatomic) _Bool wantsPersistentSnapshot;
@property (copy, nonatomic) BKSDisplayRenderOverlayDescriptor *customOverlayDescriptor;
@property (copy, nonatomic) NSURL *applicationLaunchURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithRequester:(id)arg1 reason:(id)arg2;

@end
