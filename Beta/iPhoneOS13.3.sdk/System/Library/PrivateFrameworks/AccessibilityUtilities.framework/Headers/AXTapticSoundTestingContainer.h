/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXTapticSoundTestingContainer : NSObject

{
    NSString *_sound;
    double _delay;
}

@property (retain, nonatomic) NSString *sound;
@property (nonatomic) double delay;

- (id)description;

@end
