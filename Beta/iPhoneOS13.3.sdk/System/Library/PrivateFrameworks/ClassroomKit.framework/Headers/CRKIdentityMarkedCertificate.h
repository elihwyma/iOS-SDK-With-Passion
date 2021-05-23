/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSUUID;

@interface CRKIdentityMarkedCertificate : NSObject

{
    NSUUID *_keyPairMarker;
    NSData *_certificateData;
}

@property (nonatomic, readonly) NSUUID *keyPairMarker;
@property (copy, nonatomic, readonly) NSData *certificateData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPairMarker:(id)arg1 certificateData:(id)arg2;

@end
