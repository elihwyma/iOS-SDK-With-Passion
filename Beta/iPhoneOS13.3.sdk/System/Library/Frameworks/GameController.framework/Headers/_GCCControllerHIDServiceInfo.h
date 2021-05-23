/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber, NSString;

@interface _GCCControllerHIDServiceInfo : NSObject

{
    struct __IOHIDServiceClient *_service;
    NSNumber *_registryID;
    NSString *_name;
    _Bool _isPreallocatedSiriRemote;
    NSData *_inputData;
}

@property (nonatomic, readonly) struct __IOHIDServiceClient *service;
@property (retain, nonatomic) NSData *inputData;
@property (nonatomic) _Bool isPreallocatedSiriRemote;

- (void)dealloc;
- (id)name;
- (id)registryID;
- (id)initWithService:(struct __IOHIDServiceClient *)arg1;

@end
