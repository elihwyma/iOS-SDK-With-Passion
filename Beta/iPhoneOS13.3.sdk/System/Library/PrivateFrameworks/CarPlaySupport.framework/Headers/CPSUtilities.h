/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <Foundation/NSObject.h>

@interface CPSUtilities : NSObject

{
    unsigned long long _lastButtonPressInteractionModel;
}

@property (nonatomic) unsigned long long lastButtonPressInteractionModel;

+ (id)sharedInstance;

@end
