/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CRKConcretePrivateKey : NSObject

{
    struct __SecKey *_underlyingPrivateKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) struct __SecKey *underlyingPrivateKey;

+ (id)privateKeyWithData:(id)arg1;

- (void)dealloc;
- (id)initWithPrivateKey:(struct __SecKey *)arg1;

@end
