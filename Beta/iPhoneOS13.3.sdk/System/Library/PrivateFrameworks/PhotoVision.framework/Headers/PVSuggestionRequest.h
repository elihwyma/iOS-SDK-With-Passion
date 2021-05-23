/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, VNCanceller;

@interface PVSuggestionRequest : NSObject

{
    long long _type;
    NSString *_requestId;
    NSMutableDictionary *_clusterFlagByClusterId;
    NSArray *_csns;
    NSArray *_cflags;
    CDUnknownBlockType _updateHandler;
    VNCanceller *_canceller;
}

@property (readonly) long long type;
@property (readonly) NSString *requestId;
@property (readonly) NSMutableDictionary *clusterFlagByClusterId;
@property (readonly) NSArray *csns;
@property (readonly) NSArray *cflags;
@property (copy) CDUnknownBlockType updateHandler;
@property (readonly) VNCanceller *canceller;

+ (id)requestWithFaceClusterIds:(id)arg1 clusterFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;

- (id)initWithFaceClusterIds:(id)arg1 clusterFlags:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;

@end
