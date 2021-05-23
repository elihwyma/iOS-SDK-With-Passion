/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSArray, VNRequest;

__attribute__((visibility("hidden")))
@interface _VNRequestForensicsParentChildRequests : NSObject

{
    VNRequest *_parentRequest;
    NSArray *_orderedChildRequests;
}

@property (nonatomic, readonly) VNRequest *parentRequest;
@property (copy, nonatomic, readonly) NSArray *orderedChildRequests;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithParentRequest:(id)arg1 orderedChildRequests:(id)arg2;

@end
