/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverOptions : NSObject

{
    _Bool _layoutRTL;
    _Bool _roundsToScreenScale;
    double _interSectionSpacing;
    Class _layoutAttributesClass;
    Class _invalidationContextClass;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_globalSupplementaryItems;
    CDUnknownBlockType _decorationRegistrationHandler;
}

@property (nonatomic) double interSectionSpacing;
@property (retain, nonatomic) Class layoutAttributesClass;
@property (retain, nonatomic) Class invalidationContextClass;
@property (nonatomic) _Bool layoutRTL;
@property (nonatomic) _Bool roundsToScreenScale;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSArray *globalSupplementaryItems;
@property (copy, nonatomic) CDUnknownBlockType decorationRegistrationHandler;

+ (id)defaultOptions;

@end
