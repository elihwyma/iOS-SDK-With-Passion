/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PIReframeKeyframe : NSObject

{
    CDStruct_1b6d18a9 _time;
    CDStruct_8e0628e6 _homography;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 time;
@property (nonatomic, readonly) CDStruct_8e0628e6 homography;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 homography:(CDStruct_8e0628e6)arg2;

@end
