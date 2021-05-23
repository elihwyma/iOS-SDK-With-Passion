/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSPredicate, UIScene;

@interface UISceneActivationConditions : NSObject <Swift>

{
    NSPredicate *_canActivatePredicate;
    NSPredicate *_prefersPredicate;
    UIScene *_uiScene;
}

@property (weak, nonatomic, setter=_setUIScene:) UIScene *_UIScene;
@property (copy, nonatomic) NSPredicate *canActivateForTargetContentIdentifierPredicate;
@property (copy, nonatomic) NSPredicate *prefersToActivateForTargetContentIdentifierPredicate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_validateCompileTimeIssues:(id *)arg1 runTimeIssues:(id *)arg2;
- (long long)_suitabilityForTargetContentIdentifier:(id)arg1 errorString:(id *)arg2;

@end
