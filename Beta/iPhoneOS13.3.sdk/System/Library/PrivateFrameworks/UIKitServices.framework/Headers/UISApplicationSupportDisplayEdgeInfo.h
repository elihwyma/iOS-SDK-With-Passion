/*
 Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, UISApplicationSupportDisplayEdgeInsetsWrapper;

@interface UISApplicationSupportDisplayEdgeInfo : NSObject

{
    union {
        unsigned long long asInt;
        struct {
            unsigned int assertOnMutationAttempt:1;
        } flags;
    } _infoFlags;
    UISApplicationSupportDisplayEdgeInsetsWrapper *_peripheryInsets;
    NSNumber *_systemMinimumMargin;
    NSNumber *_homeAffordanceOverlayAllowance;
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsPortrait;
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsLandscapeLeft;
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsPortraitUpsideDown;
    UISApplicationSupportDisplayEdgeInsetsWrapper *_safeAreaInsetsLandscapeRight;
}

@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *peripheryInsets;
@property (retain, nonatomic) NSNumber *systemMinimumMargin;
@property (retain, nonatomic) NSNumber *homeAffordanceOverlayAllowance;
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortrait;
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeLeft;
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortraitUpsideDown;
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultDisplayEdgeInfoForceInsets:(_Bool)arg1;
+ (id)defaultDisplayEdgeInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)_performIvarUpdateIfAllowed:(CDUnknownBlockType)arg1;
- (void)_copyFromOtherInfo:(id)arg1;

@end
