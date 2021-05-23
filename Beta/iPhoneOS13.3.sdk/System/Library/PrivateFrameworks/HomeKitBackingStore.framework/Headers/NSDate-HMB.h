/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (HMB)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hmbEncodeQueryableParameter:(id)arg1;
+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;

@end
