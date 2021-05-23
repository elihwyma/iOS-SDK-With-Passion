/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray;

@protocol UIInputViewSetPlacementDelegate;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacement : NSObject <Swift>

{
    _Bool _dirty;
    id <UIInputViewSetPlacementDelegate> delegate;
    double _extendedHeight;
    NSArray *_subPlacements;
}

@property (nonatomic, readonly) _Bool showsInputViews;
@property (nonatomic, readonly) _Bool showsKeyboard;
@property (nonatomic, readonly) _Bool isUndocked;
@property (nonatomic, readonly) _Bool requiresWindowBasedSafeAreaInsets;
@property (nonatomic, readonly) _Bool isFloating;
@property (nonatomic, readonly) _Bool isInvisible;
@property (nonatomic, readonly) _Bool isInteractive;
@property (nonatomic) double extendedHeight;
@property (nonatomic, readonly) double alpha;
@property (retain, nonatomic) NSArray *subPlacements;
@property (nonatomic) id <UIInputViewSetPlacementDelegate> delegate;

+ (_Bool)supportsSecureCoding;
+ (id)placement;
+ (id)encodablePlacementsForXPC;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGAffineTransform)transform;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;
- (_Bool)inputViewWillAppear;
- (double)inputAssistantViewHeightForInputViewSet:(id)arg1;
- (void)setDirty;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (unsigned long long)notificationsForTransitionToPlacement:(id)arg1;
- (_Bool)accessoryViewWillAppear;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (void)checkSizeForOwner:(id)arg1;
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;
- (id)expiringPlacement;
- (struct CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1;

@end
