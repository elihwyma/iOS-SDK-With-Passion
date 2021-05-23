/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSURL;

@interface PKDiscoveryMessagesMetadata : NSObject

{
    long long _version;
    NSURL *_messagesBundleURL;
}

@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSURL *messagesBundleURL;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
