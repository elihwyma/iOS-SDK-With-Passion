/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVViewDescription.h>

@class NSString;

@interface TVURLDescription : TVViewDescription

{
    _Bool _centerGrowth;
    NSString *_url;
    double _focusSizeIncrease;
    NSString *_cropCode;
    NSString *_urlFormat;
    struct CGSize _imageSize;
}

@property (retain, nonatomic) NSString *url;
@property (nonatomic) struct CGSize imageSize;
@property (nonatomic) double focusSizeIncrease;
@property (retain, nonatomic) NSString *cropCode;
@property (retain, nonatomic) NSString *urlFormat;
@property (nonatomic) _Bool centerGrowth;

- (id)initUrlWithProperties:(id)arg1 imageSize:(struct CGSize)arg2 focusSizeIncrease:(double)arg3 cropCode:(id)arg4 urlFormat:(id)arg5;

@end
