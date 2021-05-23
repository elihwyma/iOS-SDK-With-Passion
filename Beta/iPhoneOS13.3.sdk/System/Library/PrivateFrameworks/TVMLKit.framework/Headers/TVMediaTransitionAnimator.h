/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol TVMediaControllerHosting;

@interface TVMediaTransitionAnimator : NSObject

{
    _Bool _migrates;
    id <TVMediaControllerHosting> _fromHost;
    id <TVMediaControllerHosting> _toHost;
}

@property (retain, nonatomic) id <TVMediaControllerHosting> fromHost;
@property (retain, nonatomic) id <TVMediaControllerHosting> toHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)migratesMediaControllerFromHost:(id)arg1 toHost:(id)arg2;

@end
