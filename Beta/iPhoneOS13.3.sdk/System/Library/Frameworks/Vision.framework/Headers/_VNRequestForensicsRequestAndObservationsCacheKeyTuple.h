/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class VNRequest;

@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface _VNRequestForensicsRequestAndObservationsCacheKeyTuple : NSObject

{
    VNRequest *_request;
    id <NSObject><NSCopying> _observationsCacheKey;
}

@property (nonatomic, readonly) VNRequest *request;
@property (nonatomic, readonly) id <NSObject><NSCopying> observationsCacheKey;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRequest:(id)arg1 observationsCacheKey:(id)arg2;

@end
