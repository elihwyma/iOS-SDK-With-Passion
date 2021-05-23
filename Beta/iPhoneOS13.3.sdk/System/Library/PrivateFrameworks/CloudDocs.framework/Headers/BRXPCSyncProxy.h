/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSProxy.h>

@class NSError, NSObject;

@interface BRXPCSyncProxy : NSProxy

{
    NSObject *_target;
    NSError *_error;
    id _result;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id result;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)setObjResult:(id)arg1 error:(id)arg2;
- (void)setBoolResult:(_Bool)arg1 error:(id)arg2;
- (id)initWithXPCObject:(id)arg1;

@end
