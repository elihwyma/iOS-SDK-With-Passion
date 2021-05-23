/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class NSNetService, NSString;

@interface ATHostNetService : NSObject

{
    NSNetService *_netService;
    NSString *_libraryIdentifier;
}

@property (nonatomic, readonly) NSNetService *netService;
@property (nonatomic, readonly) NSString *libraryIdentifier;

- (id)initWithNetService:(id)arg1;

@end
