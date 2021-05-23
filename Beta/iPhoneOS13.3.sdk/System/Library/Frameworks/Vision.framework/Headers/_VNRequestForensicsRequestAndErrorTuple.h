/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSError, VNRequest;

__attribute__((visibility("hidden")))
@interface _VNRequestForensicsRequestAndErrorTuple : NSObject

{
    VNRequest *_request;
    NSError *_error;
}

@property (nonatomic, readonly) VNRequest *request;
@property (nonatomic, readonly) NSError *error;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRequest:(id)arg1 error:(id)arg2;

@end
