/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVDispatchOnce, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionOptionInternal : NSObject

{
    NSString *_displayName;
    NSString *_displayNameLocaleIdentifier;
    NSArray *_groupMediaCharacteristics;
    NSArray *_optionMediaCharacteristics;
    AVDispatchOnce *_synthesizeMediaCharacteristicsOnce;
}

@end
