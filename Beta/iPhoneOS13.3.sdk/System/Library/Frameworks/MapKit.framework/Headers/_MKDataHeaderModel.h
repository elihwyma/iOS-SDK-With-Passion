/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKTransitInfoLabelView, UIView, _MKLineHeaderModel;

__attribute__((visibility("hidden")))
@interface _MKDataHeaderModel : NSObject

{
    UIView *_ownerView;
    _MKLineHeaderModel *_firstLine;
    _MKLineHeaderModel *_secondLine;
    _MKLineHeaderModel *_thirdLine;
    _MKLineHeaderModel *_forthLine;
    MKTransitInfoLabelView *_transitLabel;
    _MKLineHeaderModel *_secondaryNameLine;
}

@property (weak, nonatomic) UIView *ownerView;
@property (retain, nonatomic) _MKLineHeaderModel *firstLine;
@property (retain, nonatomic) _MKLineHeaderModel *secondLine;
@property (retain, nonatomic) _MKLineHeaderModel *thirdLine;
@property (retain, nonatomic) _MKLineHeaderModel *forthLine;
@property (retain, nonatomic) MKTransitInfoLabelView *transitLabel;
@property (retain, nonatomic) _MKLineHeaderModel *secondaryNameLine;

- (id)init;
- (id)description;

@end
