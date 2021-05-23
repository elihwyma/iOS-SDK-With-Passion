/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface NFRemoteAdminCardIngestionRequest : NSObject

{
    NSString *_serverIdentifier;
    NSString *_uri;
    NSString *_sessionToken;
    NSDictionary *_cardServiceInfo;
    unsigned long long _maxDetectionTimeout;
}

@property (retain, nonatomic) NSString *serverIdentifier;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSString *sessionToken;
@property (retain, nonatomic) NSDictionary *cardServiceInfo;
@property (nonatomic) unsigned long long maxDetectionTimeout;

+ (_Bool)supportsSecureCoding;
+ (id)cardIngestionRequestWithServerIdentifier:(id)arg1 sessionToken:(id)arg2 readerModeMetadata:(id)arg3 maxDetectionTimeout:(unsigned long long)arg4;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
