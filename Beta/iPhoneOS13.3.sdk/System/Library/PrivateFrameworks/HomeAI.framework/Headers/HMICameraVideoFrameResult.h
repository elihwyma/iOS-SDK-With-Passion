/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface HMICameraVideoFrameResult : NSObject

{
    unsigned long long _frameId;
    NSDictionary *_annotationScores;
    long long _events;
    NSArray *_detections;
    unsigned long long _frameWidth;
    unsigned long long _frameHeight;
    struct CGRect _regionOfInterest;
}

@property (readonly) unsigned long long frameId;
@property (readonly) NSDictionary *annotationScores;
@property (readonly) long long events;
@property (readonly) NSArray *detections;
@property (readonly) unsigned long long frameWidth;
@property (readonly) unsigned long long frameHeight;
@property (readonly) struct CGRect regionOfInterest;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrameId:(unsigned long long)arg1 events:(long long)arg2 annotationScores:(id)arg3 detections:(id)arg4 regionOfInterest:(struct CGRect)arg5 frameWidth:(unsigned long long)arg6 frameHeight:(unsigned long long)arg7;

@end
