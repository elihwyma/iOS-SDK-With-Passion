/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <Foundation/NSNumber.h>

@class NSString;

@interface NSNumber (HMB)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hmbEncodeQueryableParameter:(id)arg1;
+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;

@end
