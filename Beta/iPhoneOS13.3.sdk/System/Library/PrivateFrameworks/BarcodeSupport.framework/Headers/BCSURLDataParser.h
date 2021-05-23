/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSURLDataParser : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)parseString:(id)arg1;
+ (id)parseURL:(id)arg1;
+ (id)_canonicalizeMessageURL:(id)arg1;
+ (long long)_dataTypeForSchemeIfSupportedByDataDetectors:(id)arg1;

@end
