/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMVisionEngine.h>

@class AXMIconClassDetectorNode, AXMImageNode;

@interface AXMIconVisionEngine : AXMVisionEngine

{
    AXMImageNode *_imageNode;
    AXMIconClassDetectorNode *_iconClassDetector;
}

@property (weak, nonatomic) AXMImageNode *imageNode;
@property (weak, nonatomic) AXMIconClassDetectorNode *iconClassDetector;

+ (id)sharedInstance;

- (id)initWithIdentifier:(id)arg1;
- (id)classifyImages:(id)arg1 withTimeout:(double)arg2;

@end
