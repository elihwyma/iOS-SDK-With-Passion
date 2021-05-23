/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_nw_advertise_descriptor;

@interface NWAdvertiseDescriptor : NSObject

{
    NSObject<OS_nw_advertise_descriptor> *_internalDescriptor;
}

@property (retain, nonatomic) NSObject<OS_nw_advertise_descriptor> *internalDescriptor;
@property (nonatomic, readonly) NSString *bonjourServiceDomain;
@property (nonatomic, readonly) NSString *bonjourServiceType;
@property (nonatomic, readonly) NSString *bonjourServiceName;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 type:(id)arg2 domain:(id)arg3;
- (id)initWithDescriptor:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)privateDescription;

@end
