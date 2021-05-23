/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

#import <IconServices/Swift-Protocol.h>

@class NSString, NSUUID;

@interface ISIconDecoration : NSObject <Swift>

{
    long long _position;
    long long _mode;
    NSString *_identifier;
    unsigned long long _identifierKind;
}

@property (readonly) NSUUID *uuid;
@property (readonly) NSString *identifier;
@property (readonly) unsigned long long identifierKind;
@property (readonly) NSUUID *resourceFingerprint;
@property long long position;
@property long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)imageForDescriptor:(id)arg1;
- (void)prepareImagesForDescriptors:(id)arg1;

@end
