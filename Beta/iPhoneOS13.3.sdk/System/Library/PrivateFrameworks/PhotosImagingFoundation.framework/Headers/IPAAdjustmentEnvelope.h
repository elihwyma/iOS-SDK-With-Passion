/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class IPAAdjustmentStack, NSString;

@interface IPAAdjustmentEnvelope : NSObject

{
    IPAAdjustmentStack *_adjustmentStack;
    NSString *_originator;
    NSString *_format;
    NSString *_formatVersion;
}

@property (retain, nonatomic) IPAAdjustmentStack *adjustmentStack;
@property (retain, nonatomic) NSString *originator;
@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSString *formatVersion;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)videoAdjustmentStack;
- (id)photoAdjustmentStack;
- (_Bool)containsPhotoAdjustments;
- (_Bool)containsVideoAdjustments;

@end
