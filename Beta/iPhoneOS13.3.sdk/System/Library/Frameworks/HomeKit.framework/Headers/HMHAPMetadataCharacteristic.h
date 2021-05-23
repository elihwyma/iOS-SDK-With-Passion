/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HMHAPMetadataCharacteristic : NSObject

{
    NSString *_type;
    NSString *_chrDescription;
}

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *chrDescription;

@end
