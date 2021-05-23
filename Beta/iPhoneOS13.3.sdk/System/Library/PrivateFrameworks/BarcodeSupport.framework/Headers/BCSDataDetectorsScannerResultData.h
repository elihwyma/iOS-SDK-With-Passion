/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class DDScannerResult, NSString;

__attribute__((visibility("hidden")))
@interface BCSDataDetectorsScannerResultData : NSObject

{
    long long _type;
    NSString *_extraPreviewText;
    DDScannerResult *_scannerResult;
}

@property (nonatomic, readonly) DDScannerResult *scannerResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *extraPreviewText;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScannerResult:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3;

@end
