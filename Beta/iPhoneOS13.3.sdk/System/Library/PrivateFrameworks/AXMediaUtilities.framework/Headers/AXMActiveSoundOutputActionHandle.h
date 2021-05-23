/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMOutputActionHandle.h>

@protocol AXMActiveSoundOutputActionHandleProvider;

@interface AXMActiveSoundOutputActionHandle : AXMOutputActionHandle

{
    id <AXMActiveSoundOutputActionHandleProvider> _handleProvider;
}

@property (retain, nonatomic) id <AXMActiveSoundOutputActionHandleProvider> handleProvider;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;

- (void)stop;
- (void)setQuantizedRate:(long long)arg1;

@end
