/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <Foundation/NSObject.h>

@interface BKUIDevice : NSObject

{
    int _mainScreenClass;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)isN84;

@end
