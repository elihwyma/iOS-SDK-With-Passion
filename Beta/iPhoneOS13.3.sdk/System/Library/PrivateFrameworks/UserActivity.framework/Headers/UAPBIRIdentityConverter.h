/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UAPBIRIdentityConverter : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)registerConverter;

- (id)typeString;
- (id)convertPlatformDataToIR:(id)arg1;
- (id)convertIRDataToPlatform:(id)arg1;

@end
