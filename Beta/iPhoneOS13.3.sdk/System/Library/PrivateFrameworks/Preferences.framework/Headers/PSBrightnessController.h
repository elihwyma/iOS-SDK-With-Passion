/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@interface PSBrightnessController : NSObject

{
    CDUnknownBlockType _isTracking;
    CDUnknownBlockType _brightnessChangedExternally;
}

@property (copy, nonatomic) CDUnknownBlockType isTracking;
@property (copy, nonatomic) CDUnknownBlockType brightnessChangedExternally;

+ (id)sharedController;

@end
