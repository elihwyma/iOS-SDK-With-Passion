//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, SXComponentSizer, SXLayoutBlueprint;
@protocol SXComponent, SXComponentLayout;

@interface SXComponentBlueprint : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _hasValidSize;
    BOOL _hasValidPosition;
    BOOL _hidden;
    id <SXComponent> _component;
    SXComponentSizer *_componentSizer;
    id <SXComponentLayout> _componentLayout;
    SXLayoutBlueprint *_parentLayoutBlueprint;
    NSDictionary *_infoFromLayouting;
    NSRange _columnRange;
    CGSize _suggestedSizeAfterInvalidation;
    CGRect _frame;
    UIEdgeInsets _contentInsets;
    UIEdgeInsets _layoutMargins;
    UIEdgeInsets _borderInsets;
    CGRect _absoluteFrame;
    CGRect _componentViewFrame;
    CGRect _contentViewFrame;
    CGRect _contentFrame;
    CGRect _backgroundViewFrame;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *infoFromLayouting; // @synthesize infoFromLayouting=_infoFromLayouting;
@property(nonatomic) CGSize suggestedSizeAfterInvalidation; // @synthesize suggestedSizeAfterInvalidation=_suggestedSizeAfterInvalidation;
@property(nonatomic) CGRect backgroundViewFrame; // @synthesize backgroundViewFrame=_backgroundViewFrame;
@property(nonatomic) CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) CGRect contentViewFrame; // @synthesize contentViewFrame=_contentViewFrame;
@property(nonatomic) CGRect componentViewFrame; // @synthesize componentViewFrame=_componentViewFrame;
@property(nonatomic) CGRect absoluteFrame; // @synthesize absoluteFrame=_absoluteFrame;
@property(nonatomic) UIEdgeInsets borderInsets; // @synthesize borderInsets=_borderInsets;
@property(nonatomic) UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) CGRect frame; // @synthesize frame=_frame;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL hasValidPosition; // @synthesize hasValidPosition=_hasValidPosition;
@property(nonatomic) BOOL hasValidSize; // @synthesize hasValidSize=_hasValidSize;
@property(nonatomic) NSRange columnRange; // @synthesize columnRange=_columnRange;
@property(nonatomic) __weak SXLayoutBlueprint *parentLayoutBlueprint; // @synthesize parentLayoutBlueprint=_parentLayoutBlueprint;
@property(readonly, nonatomic) id <SXComponentLayout> componentLayout; // @synthesize componentLayout=_componentLayout;
@property(readonly, nonatomic) SXComponentSizer *componentSizer; // @synthesize componentSizer=_componentSizer;
@property(readonly, nonatomic) id <SXComponent> component; // @synthesize component=_component;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)storeInformationForRenderingPhase:(id)arg1;
- (void)invalidateSize;
- (void)invalidatePosition;
- (void)invalidateLayout;
@property(readonly, nonatomic) SXLayoutBlueprint *rootLayoutBlueprint;
@property(readonly, nonatomic) BOOL hasValidLayout;
- (void)updatePosition:(CGPoint)arg1;
- (void)updateSize:(CGSize)arg1;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentSizer:(id)arg3;

@end

