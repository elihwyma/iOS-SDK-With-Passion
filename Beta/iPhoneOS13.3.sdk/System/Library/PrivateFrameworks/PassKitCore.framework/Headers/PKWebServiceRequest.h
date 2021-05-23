/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKWebServiceRequest : NSObject <Swift>

{
    NSString *_boundInterfaceIdentifier;
}

@property (copy, nonatomic) NSString *boundInterfaceIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)_HTTPBodyWithDictionary:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_murlRequestWithURL:(id)arg1;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;
- (id)_murlRequestWithURL:(id)arg1 appleAccountInformation:(id)arg2;

@end
