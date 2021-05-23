/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMSetting, NAFuture, NSDate, NSError, NSNumber;

@interface _HFHomeKitSettingsVendorSettingsWriteValueTransaction : NSObject

{
    _Bool _started;
    NAFuture *_settingWriteFuture;
    NSError *_error;
    NSDate *_transactionStartDate;
    id _value;
    id _previousValue;
    unsigned long long _changeType;
    HMSetting *_setting;
    NSNumber *_transactionNumber;
}

@property (retain, nonatomic) NAFuture *settingWriteFuture;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=hasStarted) _Bool started;
@property (nonatomic, readonly) NSDate *transactionStartDate;
@property (copy, nonatomic, readonly) id value;
@property (copy, nonatomic, readonly) id previousValue;
@property (nonatomic, readonly) unsigned long long changeType;
@property (nonatomic, readonly) HMSetting *setting;
@property (nonatomic, readonly) NSNumber *transactionNumber;

- (id)init;
- (id)description;
- (id)descriptionBuilder;
- (id)initWithSetting:(id)arg1 previousValue:(id)arg2 value:(id)arg3 changeType:(unsigned long long)arg4;

@end
