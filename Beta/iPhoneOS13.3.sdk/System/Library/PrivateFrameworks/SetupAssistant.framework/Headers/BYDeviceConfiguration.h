/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSString;

@interface BYDeviceConfiguration : NSObject

{
    NSString *_productVersion;
}

@property (nonatomic) NSString *productVersion;

+ (id)currentConfiguration;

- (id)init;

@end
