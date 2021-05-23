/*
 Image: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FKTextFeature : NSObject

{
    CDUnion_a5814135 _backingIndex;
    struct FKSession *_session;
    int _scale;
    float _confidence;
    NSArray *_candidates;
    long long _featureID;
    NSArray *_corners;
    long long _type;
    NSString *_text;
    NSArray *_subFeatures;
    struct CGRect _boundingBox;
}

@property (retain, nonatomic) NSArray *subFeatures;
@property (copy, nonatomic) NSString *text;
@property float confidence;
@property (nonatomic, readonly) long long featureID;
@property (nonatomic, readonly) struct CGRect boundingBox;
@property (retain, nonatomic, readonly) NSArray *corners;
@property (nonatomic, readonly) long long type;
@property (readonly) NSArray *candidates;

+ (id)featureFromConcompIndex:(int)arg1 session:(struct FKSession *)arg2 scaling:(CDStruct_67c9bb48 *)arg3 type:(long long)arg4 createDiacriticFeatures:(_Bool)arg5 featureID:(long long *)arg6;
+ (id)featureFromSequenceIndex:(int)arg1 session:(struct FKSession *)arg2 scaling:(CDStruct_67c9bb48 *)arg3 createConcompFeatures:(_Bool)arg4 createDiacriticFeatures:(_Bool)arg5 featureID:(long long *)arg6;

- (void)dealloc;
- (id)initWithType:(long long)arg1 boundingBox:(struct CGRect *)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(struct FKSession *)arg5 backingIndex:(CDUnion_a5814135)arg6 scale:(int)arg7;

@end
