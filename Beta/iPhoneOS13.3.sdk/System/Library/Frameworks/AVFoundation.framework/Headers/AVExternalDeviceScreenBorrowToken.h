/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVExternalDevice, NSString;

__attribute__((visibility("hidden")))
@interface AVExternalDeviceScreenBorrowToken : NSObject

{
    AVExternalDevice *_externalDevice;
    NSString *_client;
    NSString *_reason;
}

@property (nonatomic, readonly) NSString *client;
@property (nonatomic, readonly) NSString *reason;

- (id)init;
- (void)dealloc;
- (id)initWithExternalDevice:(id)arg1 client:(id)arg2 reason:(id)arg3;

@end
