/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSCoder.h>

@class NSData, NSDictionary, NSMapTable, NSMutableArray, NSString;

@interface MSVOPACKEncoder : NSCoder

{
    _Bool _hasFinished;
    NSData *_encodedData;
    NSMutableArray *_objects;
    NSMapTable *_objectLookupTable;
    NSMutableArray *_wrapperStack;
    NSDictionary *_userInfo;
}

@property (nonatomic) _Bool hasFinished;
@property (nonatomic, readonly) NSMutableArray *objects;
@property (nonatomic, readonly) NSMapTable *objectLookupTable;
@property (nonatomic, readonly) NSMutableArray *wrapperStack;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSData *encodedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasTopLevelData;

+ (id)encodedDataWithRootObject:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
+ (id)encodedDataWithRootObject:(id)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)allowsKeyedCoding;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (_Bool)requiresSecureCoding;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)finishEncoding;
- (void)finishEncodingPartialTopLevelObject;
- (void)msv_setUserInfo:(id)arg1;
- (void)beginEncodingPartialTopLevelObject:(id)arg1;
- (id)msv_userInfo;
- (id)encodedDataWithError:(id *)arg1;
- (void)finishEncodingWithError:(id *)arg1;
- (id)_convertObject:(id)arg1;
- (void)_encodeNumber:(id)arg1 forKey:(id)arg2;
- (id)_convertNumber:(id)arg1;

@end
