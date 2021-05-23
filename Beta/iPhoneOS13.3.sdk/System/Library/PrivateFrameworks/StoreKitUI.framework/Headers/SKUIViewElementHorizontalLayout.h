/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUIViewElementHorizontalLayout : NSObject

{
    double _elementSpacing;
    double _layoutWidth;
    long long _maximumElementsPerLine;
    long long _maximumLines;
}

@property (nonatomic) double elementSpacing;
@property (nonatomic) double layoutWidth;
@property (nonatomic) long long maximumElementsPerLine;
@property (nonatomic) long long maximumLines;

- (id)layoutViewElements:(id)arg1 usingSizingBlock:(CDUnknownBlockType)arg2;

@end
