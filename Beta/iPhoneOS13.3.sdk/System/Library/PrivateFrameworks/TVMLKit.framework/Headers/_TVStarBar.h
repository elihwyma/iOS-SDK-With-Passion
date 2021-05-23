/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _TVStarBar : NSObject

{
    unsigned long long _numStars;
    double _value;
    NSAttributedString *_countStr;
    double _barWidth;
    double _height;
    struct UIEdgeInsets _barMargin;
}

@property (nonatomic) unsigned long long numStars;
@property (nonatomic) double value;
@property (retain, nonatomic) NSAttributedString *countStr;
@property (nonatomic) double barWidth;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets barMargin;

@end
