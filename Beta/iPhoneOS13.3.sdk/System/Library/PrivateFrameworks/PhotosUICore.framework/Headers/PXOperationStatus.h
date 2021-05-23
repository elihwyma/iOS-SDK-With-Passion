/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSError;

@interface PXOperationStatus : NSObject <Swift>

{
    long long _state;
    double _progress;
    NSError *_error;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) NSError *error;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithState:(long long)arg1 progress:(double)arg2 error:(id)arg3;
- (id)operationStatusByMixingOperationStatus:(id)arg1 withMixFactor:(double)arg2;

@end
