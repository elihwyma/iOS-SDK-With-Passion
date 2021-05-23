/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface _NUVideoProperties : NSObject

{
    NSURL *_url;
    NSArray *_metadata;
    long long _orientation;
    NSDictionary *_colorProperties;
    CDStruct_d58201db _size;
    CDStruct_d58201db _originalSize;
    CDStruct_1b6d18a9 _livePhotoKeyFrameTime;
    CDStruct_1b6d18a9 _duration;
    CDStruct_996ac03c _cleanAperture;
    CDStruct_996ac03c _originalCleanAperture;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSArray *metadata;
@property (nonatomic) CDStruct_912cb5d2 size;
@property (nonatomic) CDStruct_912cb5d2 originalSize;
@property (nonatomic) CDStruct_996ac03c cleanAperture;
@property (nonatomic) CDStruct_996ac03c originalCleanAperture;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSDictionary *colorProperties;
@property (nonatomic) CDStruct_1b6d18a9 livePhotoKeyFrameTime;
@property (nonatomic) CDStruct_1b6d18a9 duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProperties:(id)arg1;

@end
