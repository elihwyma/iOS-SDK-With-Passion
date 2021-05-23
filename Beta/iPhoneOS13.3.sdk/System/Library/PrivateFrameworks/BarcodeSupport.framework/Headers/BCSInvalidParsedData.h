/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSInvalidParsedData : NSObject

{
    long long _invalidDataType;
    NSString *_invalidContents;
    NSString *_invalidURLScheme;
}

@property (nonatomic, readonly) long long invalidDataType;
@property (copy, nonatomic) NSString *invalidContents;
@property (copy, nonatomic) NSString *invalidURLScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *extraPreviewText;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvalidDataType:(long long)arg1 invalidContents:(id)arg2;

@end
