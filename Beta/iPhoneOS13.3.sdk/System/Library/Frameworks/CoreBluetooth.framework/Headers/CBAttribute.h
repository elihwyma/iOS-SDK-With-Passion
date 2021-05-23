/*
 Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <Foundation/NSObject.h>

@class CBUUID;

@interface CBAttribute : NSObject

{
    CBUUID *_UUID;
}

@property (nonatomic, readonly) CBUUID *UUID;

- (id)initWithUUID:(id)arg1;

@end
