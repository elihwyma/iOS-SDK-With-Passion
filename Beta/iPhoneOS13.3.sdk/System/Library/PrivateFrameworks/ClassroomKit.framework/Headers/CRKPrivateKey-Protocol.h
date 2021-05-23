/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/Swift-Protocol.h>

@class NSData;

@protocol CRKPrivateKey <Swift>

@property (copy, nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) struct __SecKey *underlyingPrivateKey;

@end
