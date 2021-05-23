/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSURL;

@protocol NUVideoProperties <Swift>

@property (readonly) NSURL *url;
@property (readonly) NSArray *metadata;
@property (readonly) CDStruct_912cb5d2 size;
@property (readonly) CDStruct_912cb5d2 originalSize;
@property (readonly) CDStruct_996ac03c cleanAperture;
@property (readonly) CDStruct_996ac03c originalCleanAperture;
@property (readonly) long long orientation;
@property (readonly) NSDictionary *colorProperties;
@property (readonly) CDStruct_1b6d18a9 livePhotoKeyFrameTime;
@property (readonly) CDStruct_1b6d18a9 duration;

@end
