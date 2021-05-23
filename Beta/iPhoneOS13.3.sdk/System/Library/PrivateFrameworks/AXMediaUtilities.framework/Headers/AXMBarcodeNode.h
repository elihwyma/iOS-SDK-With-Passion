/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class AVCaptureMetadataOutput;

@interface AXMBarcodeNode : AXMEvaluationNode

{
    AVCaptureMetadataOutput *_captureOutput;
}

@property (retain, nonatomic) AVCaptureMetadataOutput *captureOutput;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

@end
