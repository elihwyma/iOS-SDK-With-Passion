/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_nw_browse_descriptor;

@interface NWBrowseDescriptor : NSObject

{
    NSObject<OS_nw_browse_descriptor> *_internalDescriptor;
}

@property (retain, nonatomic) NSObject<OS_nw_browse_descriptor> *internalDescriptor;
@property (copy, nonatomic, readonly) NSString *privateDescription;
@property (nonatomic, readonly) NSString *bonjourServiceDomain;
@property (nonatomic, readonly) NSString *bonjourServiceType;

+ (unsigned int)descriptorType;
+ (_Bool)supportsBrowseCallback;
+ (Class)copyClassForDescriptorType:(int)arg1;
+ (id)descriptorWithInternalDescriptor:(id)arg1;
+ (id)descriptorWithProtocolBufferData:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)encodedData;
- (id)initWithDescriptor:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)initWithEncodedData:(id)arg1;
- (id)createProtocolBufferObject;
- (void)browseWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
