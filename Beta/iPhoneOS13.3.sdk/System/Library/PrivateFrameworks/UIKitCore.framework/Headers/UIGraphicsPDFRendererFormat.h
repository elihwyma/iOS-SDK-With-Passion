/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGraphicsRendererFormat.h>

@class NSDictionary, NSMutableData, NSURL;

@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat

{
    NSDictionary *_documentInfo;
    NSURL *_outputURL;
    NSMutableData *_pdfData;
}

@property (retain) NSURL *outputURL;
@property (retain) NSMutableData *pdfData;
@property (copy, nonatomic) NSDictionary *documentInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
