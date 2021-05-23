/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSNumber, NSString, __CFN_ConnectionMetrics;

@protocol OS_nw_endpoint, OS_nw_establishment_report;

@interface _NSURLSessionConnectionEstablishProperties : NSObject

{
    __CFN_ConnectionMetrics *__metrics;
}

@property (nonatomic, readonly) __CFN_ConnectionMetrics *_metrics;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *localEndpoint;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *remoteEndpoint;
@property (copy, nonatomic, readonly) NSString *interfaceName;
@property (nonatomic, readonly, getter=isCellular) _Bool cellular;
@property (nonatomic, readonly, getter=isExpensive) _Bool expensive;
@property (nonatomic, readonly, getter=isConstrained) _Bool constrained;
@property (nonatomic, readonly, getter=isMultipath) _Bool multipath;
@property (nonatomic, readonly) _Bool usedTFO;
@property (copy, nonatomic, readonly) NSString *networkProtocolName;
@property (copy, nonatomic, readonly) NSNumber *negotiatedTLSProtocolVersion;
@property (copy, nonatomic, readonly) NSNumber *negotiatedTLSCipherSuite;
@property (retain, nonatomic, readonly) NSObject<OS_nw_establishment_report> *establishmentReport;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetrics:(id)arg1;

@end
