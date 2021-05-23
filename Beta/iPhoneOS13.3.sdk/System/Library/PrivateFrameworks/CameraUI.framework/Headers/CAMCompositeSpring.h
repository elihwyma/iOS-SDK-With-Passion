/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMSpring.h>

@class NSArray;

@interface CAMCompositeSpring : CAMSpring

{
    NSArray *_addedSprings;
}

@property (retain, nonatomic) NSArray *addedSprings;

- (void)updateForTimestamp:(double)arg1;

@end
