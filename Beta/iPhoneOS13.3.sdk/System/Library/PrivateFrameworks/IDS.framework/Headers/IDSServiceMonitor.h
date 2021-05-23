/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSString;

@interface IDSServiceMonitor : NSObject

{
    long long _availability;
    NSString *_service;
    int _token;
}

@property (nonatomic, readonly) NSString *service;

- (void)dealloc;
- (id)initWithService:(id)arg1;
- (long long)serviceAvailability;
- (void)updateAvailability;
- (void)_updateAvailability;
- (void)_postAvailability:(long long)arg1;

@end
