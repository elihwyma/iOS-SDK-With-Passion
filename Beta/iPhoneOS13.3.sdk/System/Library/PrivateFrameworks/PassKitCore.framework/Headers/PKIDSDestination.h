/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString;

@interface PKIDSDestination : NSObject

{
    NSString *_deviceIdentifier;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *name;

+ (id)destinationWithDeviceIdentifier:(id)arg1 name:(id)arg2;

- (id)description;
- (id)initWithDeviceIdentifier:(id)arg1 name:(id)arg2;

@end
