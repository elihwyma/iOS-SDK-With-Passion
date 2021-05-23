/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class _DUIImageComponent, _DUIPreview;

@interface _DUIVisibleDroppedItem : NSObject <Swift>

{
    _Bool _constrainSize;
    _Bool _flipped;
    _Bool _precisionMode;
    unsigned long long _itemIndex;
    _DUIImageComponent *_imageComponent;
    _DUIPreview *_preview;
    double _rotation;
    struct CGPoint _center;
    struct CGVector _velocity;
    struct CGVector _targetVelocity;
}

@property (nonatomic) unsigned long long itemIndex;
@property (retain, nonatomic) _DUIImageComponent *imageComponent;
@property (copy, nonatomic) _DUIPreview *preview;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) struct CGVector velocity;
@property (nonatomic) struct CGVector targetVelocity;
@property (nonatomic) _Bool constrainSize;
@property (nonatomic) _Bool flipped;
@property (nonatomic) _Bool precisionMode;
@property (nonatomic) double rotation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createSnapshotView;

@end
