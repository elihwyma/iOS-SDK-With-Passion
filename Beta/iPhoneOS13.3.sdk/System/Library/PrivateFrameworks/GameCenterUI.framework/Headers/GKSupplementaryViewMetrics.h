/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface GKSupplementaryViewMetrics : NSObject

{
    _Bool _shouldPin;
    _Bool _hidden;
    _Bool _shouldUseGlobalIndexing;
    _Bool _shouldPinGlobal;
    double _desiredWidth;
    double _desiredHeight;
    NSString *_kind;
    Class _reusableViewClass;
    SEL _configurator;
    id _target;
    long long _animateWithSection;
    struct _NSRange _globalSectionRange;
}

@property (nonatomic) _Bool shouldUseGlobalIndexing;
@property (nonatomic) _Bool shouldPinGlobal;
@property (nonatomic) struct _NSRange globalSectionRange;
@property (nonatomic) long long animateWithSection;
@property (nonatomic) double desiredWidth;
@property (nonatomic) double desiredHeight;
@property (nonatomic) _Bool shouldPin;
@property (retain, nonatomic) NSString *kind;
@property (nonatomic) Class reusableViewClass;
@property (nonatomic) SEL configurator;
@property (nonatomic) id target;
@property (nonatomic, getter=isHidden) _Bool hidden;

+ (id)supplementaryMetrics;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localDescription;
- (struct CGSize)sizeForCollectionView:(id)arg1;

@end
