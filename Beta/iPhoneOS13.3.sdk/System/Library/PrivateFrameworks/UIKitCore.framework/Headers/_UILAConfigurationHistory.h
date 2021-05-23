/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UILAConfigurationHistory : NSObject <Swift>

{
    NSMutableSet *_newlyHiddenItems;
    NSMutableSet *_newlyUnhiddenItems;
    NSMutableSet *_invalidBaselineConstraints;
    _Bool _layoutFillsCanvas;
    _Bool _layoutUsesCanvasMarginsWhenFilling;
    _Bool _hasEstablishedBaseValues;
    _Bool _inLayoutArrangementUpdateSection;
    long long _axis;
}

@property (nonatomic) _Bool hasEstablishedBaseValues;
@property (nonatomic, getter=isInLayoutArrangementUpdateSection) _Bool inLayoutArrangementUpdateSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long axis;
@property (nonatomic) _Bool layoutFillsCanvas;
@property (nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic, readonly) NSSet *invalidBaselineConstraints;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_invalidateBaselineConstraint:(id)arg1;

@end
