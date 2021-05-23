/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSUUID;

@interface CRKIdentityMarkedPrivateKey : NSObject

{
    NSUUID *_keyPairMarker;
    NSData *_privateKeyData;
}

@property (nonatomic, readonly) NSUUID *keyPairMarker;
@property (copy, nonatomic, readonly) NSData *privateKeyData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPairMarker:(id)arg1 privateKeyData:(id)arg2;

@end
