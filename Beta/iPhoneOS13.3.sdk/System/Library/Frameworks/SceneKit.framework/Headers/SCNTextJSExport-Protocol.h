/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSString;

@protocol SCNTextJSExport <Swift>

@property (nonatomic) double extrusionDepth;
@property (copy, nonatomic) id string;
@property (retain, nonatomic) id font;
@property (nonatomic, getter=isWrapped) _Bool wrapped;
@property (nonatomic) struct CGRect containerFrame;
@property (nonatomic, readonly) struct CGSize textSize;
@property (copy, nonatomic) NSString *truncationMode;
@property (copy, nonatomic) NSString *alignmentMode;
@property (nonatomic) double chamferRadius;
@property (nonatomic) long long chamferSegmentCount;
@property (copy, nonatomic) id chamferProfile;
@property (nonatomic) double flatness;

+ (unsigned short)textWithString:extrusionDepth: /* Error: Ran out of types for this method. */;

@end
