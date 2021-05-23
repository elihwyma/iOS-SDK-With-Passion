/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSCoder.h>

@class MSVSegmentedCodingPackage, NSDictionary, NSMutableDictionary;

@protocol MSVSegmentedCoding;

@interface MSVSegmentedEncoder : NSCoder

{
    _Bool _hasFinished;
    MSVSegmentedCodingPackage *_package;
    id <MSVSegmentedCoding> _rootObject;
    NSMutableDictionary *_subcoders;
    NSDictionary *_userInfo;
}

@property (nonatomic) _Bool hasFinished;
@property (retain, nonatomic) MSVSegmentedCodingPackage *package;
@property (retain, nonatomic) id <MSVSegmentedCoding> rootObject;
@property (retain, nonatomic) NSMutableDictionary *subcoders;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)finishEncoding;
- (id)initWithCodingPackage:(id)arg1 userInfo:(id)arg2;
- (id)_coderForKey:(id)arg1;
- (void)msv_setUserInfo:(id)arg1;
- (id)initWithCodingPackage:(id)arg1;
- (id)msv_userInfo;

@end
