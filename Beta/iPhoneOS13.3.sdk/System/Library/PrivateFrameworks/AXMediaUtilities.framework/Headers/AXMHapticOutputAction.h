/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMOutputAction.h>

@class NSURL;

@interface AXMHapticOutputAction : AXMOutputAction

{
    NSURL *_hapticFileURL;
    double _hapticIntensity;
}

@property (nonatomic, readonly) NSURL *hapticFileURL;
@property (nonatomic) double hapticIntensity;

- (id)initWithURL:(id)arg1;
- (id)_initWithURL:(id)arg1 handle:(id)arg2;

@end
