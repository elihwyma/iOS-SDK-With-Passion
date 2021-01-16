//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PXGSpriteReference;

@interface PXGAnchorConstraint : NSObject <NSCopying>
{
    BOOL _visiblePortionOnly;
    unsigned int _spriteEdge;
    unsigned int _visibleRectEdge;
    PXGSpriteReference *_spriteReference;
    NSUInteger _referencingOptions;
    long long _spriteAttribute;
    long long _inequality;
    double _offset;
    UIEdgeInsets _padding;
}

@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned int visibleRectEdge; // @synthesize visibleRectEdge=_visibleRectEdge;
@property(nonatomic) unsigned int spriteEdge; // @synthesize spriteEdge=_spriteEdge;
@property(nonatomic) long long inequality; // @synthesize inequality=_inequality;
@property(nonatomic) UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) BOOL visiblePortionOnly; // @synthesize visiblePortionOnly=_visiblePortionOnly;
@property(nonatomic) long long spriteAttribute; // @synthesize spriteAttribute=_spriteAttribute;
@property(nonatomic) NSUInteger referencingOptions; // @synthesize referencingOptions=_referencingOptions;
@property(retain, nonatomic) PXGSpriteReference *spriteReference; // @synthesize spriteReference=_spriteReference;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;

@end
