/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SBUIBannerTargetImplementation;

@interface SBUIBannerTargetProxy : NSObject

{
    void *_identifier;
    long long _idiom;
    id <SBUIBannerTargetImplementation> _implementation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) void *bannerTargetIdentifier;
@property (nonatomic, readonly) long long bannerTargetIdiom;

- (void)invalidate;
- (void)registerSource:(id)arg1;
- (void)unregisterSource:(id)arg1;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (_Bool)isShowingModalBanner;
- (void)signalSource:(id)arg1;
- (id)currentBannerContextForSource:(id)arg1;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeCachedBannerForContext:(id)arg1;
- (id)initWithTargetImplementation:(id)arg1;

@end
