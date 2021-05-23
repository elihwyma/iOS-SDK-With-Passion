/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSString, SimDevice;

__attribute__((visibility("hidden")))
@interface OSLogDevice : NSObject

{
    long long _devType;
    void *_mobDev;
    SimDevice *_simDev;
    NSString *_uid;
}

@property (nonatomic) long long devType;
@property (nonatomic) void *mobDev;
@property (retain, nonatomic) SimDevice *simDev;
@property (retain, nonatomic) NSString *uid;

- (id)init;
- (id)description;
- (id)initWithMobileDevice:(void *)arg1 andID:(id)arg2;
- (id)initWithSimualatedDevice:(id)arg1;

@end
