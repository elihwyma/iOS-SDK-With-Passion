/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, _UIMotionAnalyzerSettings;

@interface UIMotionEffect : NSObject <Swift>

{
    _UIMotionAnalyzerSettings *_preferredMotionAnalyzerSettings;
    NSString *_animationIdentifier;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (id)_animationIdentifier;
- (id)_preferredMotionAnalyzerSettings;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;
- (void)_setPreferredMotionAnalyzerSettings:(id)arg1;

@end
