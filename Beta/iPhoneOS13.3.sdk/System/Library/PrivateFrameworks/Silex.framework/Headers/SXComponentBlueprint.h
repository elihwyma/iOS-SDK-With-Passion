/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSDictionary, SXComponentSizer, SXLayoutBlueprint;

@protocol SXComponent, SXComponentLayout;

@interface SXComponentBlueprint : NSObject <Swift>

{
    _Bool _hasValidSize;
    _Bool _hasValidPosition;
    _Bool _hidden;
    id <SXComponent> _component;
    SXComponentSizer *_componentSizer;
    id <SXComponentLayout> _componentLayout;
    SXLayoutBlueprint *_parentLayoutBlueprint;
    NSDictionary *_infoFromLayouting;
    struct _NSRange _columnRange;
    struct CGSize _suggestedSizeAfterInvalidation;
    struct CGRect _frame;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _layoutMargins;
    struct UIEdgeInsets _borderInsets;
    struct CGRect _absoluteFrame;
    struct CGRect _componentViewFrame;
    struct CGRect _contentViewFrame;
    struct CGRect _contentFrame;
    struct CGRect _backgroundViewFrame;
}

@property (nonatomic) struct CGRect frame;
@property (nonatomic) _Bool hasValidSize;
@property (nonatomic) _Bool hasValidPosition;
@property (weak, nonatomic) SXLayoutBlueprint *parentLayoutBlueprint;
@property (nonatomic) struct CGSize suggestedSizeAfterInvalidation;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly) NSDictionary *infoFromLayouting;
@property (nonatomic, readonly) id <SXComponent> component;
@property (nonatomic, readonly) SXComponentSizer *componentSizer;
@property (nonatomic, readonly) id <SXComponentLayout> componentLayout;
@property (nonatomic, readonly) SXLayoutBlueprint *rootLayoutBlueprint;
@property (nonatomic) struct _NSRange columnRange;
@property (nonatomic, readonly) _Bool hasValidLayout;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) struct UIEdgeInsets layoutMargins;
@property (nonatomic) struct UIEdgeInsets borderInsets;
@property (nonatomic) struct CGRect absoluteFrame;
@property (nonatomic) struct CGRect componentViewFrame;
@property (nonatomic) struct CGRect contentViewFrame;
@property (nonatomic) struct CGRect contentFrame;
@property (nonatomic) struct CGRect backgroundViewFrame;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidateLayout;
- (void)invalidateSize;
- (void)storeInformationForRenderingPhase:(id)arg1;
- (void)invalidatePosition;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentSizer:(id)arg3;
- (void)updateSize:(struct CGSize)arg1;
- (void)updatePosition:(struct CGPoint)arg1;

@end
