/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSString;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CKLogFacilityWrapper : NSObject

{
    NSObject<OS_os_log> *_facility;
    NSString *_facilityName;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *facility;
@property (nonatomic, readonly) NSString *facilityName;

- (id)initWithFacility:(id)arg1 facilityName:(id)arg2;

@end
