/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKCertificate;

@interface CRKConcreteTrust : NSObject

{
    struct __SecTrust *_underlyingTrust;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CRKCertificate> leafCertificate;
@property (nonatomic, readonly) struct __SecTrust *underlyingTrust;

- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust *)arg1;

@end
