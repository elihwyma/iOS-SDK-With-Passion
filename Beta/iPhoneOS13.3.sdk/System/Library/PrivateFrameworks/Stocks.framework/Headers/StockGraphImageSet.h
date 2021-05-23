/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface StockGraphImageSet : NSObject

{
    UIImage *_lineGraphImage;
    UIImage *_highlightOverlayImage;
    UIImage *_volumeGraphImage;
}

@property (retain, nonatomic) UIImage *lineGraphImage;
@property (retain, nonatomic) UIImage *highlightOverlayImage;
@property (retain, nonatomic) UIImage *volumeGraphImage;

@end
