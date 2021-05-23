/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData;

@interface PKWebServiceResponse : NSObject <Swift>

{
    NSData *_rawData;
    id _JSONObject;
}

@property (nonatomic, readonly) NSData *rawData;
@property (nonatomic, readonly) id JSONObject;

+ (_Bool)supportsSecureCoding;
+ (id)responseWithData:(id)arg1;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end
