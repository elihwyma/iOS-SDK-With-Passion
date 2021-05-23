/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUBonjourDevice, CUNANEndpoint, NSDictionary, NSString;

@interface CUNetServiceEndpoint : NSObject

{
    NSString *_identifier;
    NSString *_name;
    NSDictionary *_serviceInfo;
    NSString *_serviceType;
    CUBonjourDevice *_bonjourDevice;
    CUNANEndpoint *_nanEndpoint;
}

@property (retain, nonatomic) CUBonjourDevice *bonjourDevice;
@property (retain, nonatomic) CUNANEndpoint *nanEndpoint;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic, readonly) NSDictionary *serviceInfo;
@property (copy, nonatomic) NSString *serviceType;

- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (unsigned int)updateWithNANEndpoint:(id)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;

@end
