/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class NFCNDEFMessage, NSString;

__attribute__((visibility("hidden")))
@interface BCSNFCCodePayload : NSObject

{
    NFCNDEFMessage *_nfcPayload;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long codeType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNFCPayload:(id)arg1;
- (void)savePayloadInUserActivity:(id)arg1;

@end
