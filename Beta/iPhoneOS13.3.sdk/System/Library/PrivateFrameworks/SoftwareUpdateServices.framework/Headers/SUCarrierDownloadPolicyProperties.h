/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@interface SUCarrierDownloadPolicyProperties : NSObject

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)_numberForKey:(id)arg1;
- (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)_isValidHour:(long long)arg1;
- (id)_carrierSUProperties;
- (_Bool)isDownloadFree;
- (_Bool)isDownloadAllowable;
- (_Bool)isDownloadAllowableOver2G;
- (_Bool)isAutoDownloadAllowable;
- (long long)maximumDownloadSizeInBytes;
- (unsigned long long)numberOfDaysToWaitForCellularAutoDownload;
- (long long)peakStartHour;
- (long long)peakEndHour;

@end
