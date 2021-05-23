/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HMAccessoryAdvertisementInfo : NSObject

{
    NSString *_deviceIdentifier;
}

@property (copy, nonatomic, readonly) NSString *deviceIdentifier;

- (id)initWithAccessoryIdentifier:(id)arg1;

@end
