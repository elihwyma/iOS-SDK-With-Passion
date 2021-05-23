/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSGenericDataParser : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)parseString:(id)arg1;
+ (id)_parsedDataFromDDResult:(struct __DDResult *)arg1 decodedString:(id)arg2;

@end
