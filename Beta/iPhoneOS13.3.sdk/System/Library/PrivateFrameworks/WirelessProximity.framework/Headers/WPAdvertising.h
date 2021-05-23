/*
 Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@protocol WPAdvertisingDelegate;

@interface WPAdvertising

{
    id <WPAdvertisingDelegate> _delegate;
}

@property (retain, nonatomic) id <WPAdvertisingDelegate> delegate;

+ (unsigned char)puckStringToType:(id)arg1;
+ (id)puckTypeToString:(unsigned char)arg1;

- (void)invalidate;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)stateDidChange:(long long)arg1;
- (void)registerService:(id)arg1;
- (id)clientAsString;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (id)parseCompanyData:(id)arg1;
- (void)deregisterService:(id)arg1;

@end
