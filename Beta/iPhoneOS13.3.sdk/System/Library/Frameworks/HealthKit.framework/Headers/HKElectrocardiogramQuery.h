/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class HKElectrocardiogram, NSString;

@interface HKElectrocardiogramQuery : HKQuery

{
    HKElectrocardiogram *_elecrocardiogram;
    unsigned long long _leadName;
    CDUnknownBlockType _dataHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterfaceProtocol;

- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)_enumerateDataWithHandler:(CDUnknownBlockType)arg1;
- (void)client_deliverData;
- (id)initWithElectrocardiogram:(id)arg1 lead:(unsigned long long)arg2 dataHandler:(CDUnknownBlockType)arg3;

@end
