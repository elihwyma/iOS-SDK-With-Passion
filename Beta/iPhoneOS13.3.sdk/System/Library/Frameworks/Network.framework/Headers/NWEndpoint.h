/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NWInterface;

@protocol OS_nw_endpoint;

@interface NWEndpoint : NSObject

{
    NSObject<OS_nw_endpoint> *_internalEndpoint;
}

@property (retain, nonatomic) NSObject<OS_nw_endpoint> *internalEndpoint;
@property (retain, nonatomic) NWInterface *interface;
@property (retain, nonatomic) NSData *txtRecord;
@property (nonatomic, readonly) NSString *parentEndpointDomain;
@property (copy, nonatomic, readonly) NSString *privateDescription;
@property (nonatomic) unsigned short alternatePort;

+ (_Bool)supportsSecureCoding;
+ (id)endpointWithCEndpoint:(id)arg1;
+ (unsigned int)endpointType;
+ (_Bool)supportsResolverCallback;
+ (Class)copyClassForEndpointType:(int)arg1;
+ (id)endpointWithInternalEndpoint:(id)arg1;
+ (id)endpointWithProtocolBufferData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)encodedData;
- (id)initWithEndpoint:(id)arg1;
- (id)copyCEndpoint;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (void)resolveEndpointWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEncodedData:(id)arg1;
- (id)createProtocolBufferObject;

@end
