/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSString, PHAsset;

@interface PHMediaRequest : NSObject

{
    unsigned long long _requestIndex;
    _Atomic _Bool _cancelled;
    NSString *_identifierString;
    int _requestID;
    unsigned long long _managerID;
    PHAsset *_asset;
    long long _contextType;
    unsigned long long _signpostID;
}

@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) unsigned long long requestIndex;
@property (nonatomic, readonly) unsigned long long managerID;
@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) long long contextType;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly, getter=isSynchronous) _Bool synchronous;

- (void)cancel;
- (void)startRequest;
- (void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5;
- (id)identifierString;

@end
