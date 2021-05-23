/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSCoder.h>

@class MSVSegmentedCodingPackage, NSArray, NSDictionary;

@interface MSVSegmentedDecoder : NSCoder

{
    MSVSegmentedCodingPackage *_package;
    Class _rootClass;
    NSArray *_subcoders;
    NSDictionary *_userInfo;
}

@property (retain, nonatomic) MSVSegmentedCodingPackage *package;
@property (retain, nonatomic) Class rootClass;
@property (retain, nonatomic) NSArray *subcoders;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)decodedObjectOfClass:(Class)arg1 fromPackage:(id)arg2 userInfo:(id)arg3 error:(id *)arg4;
+ (id)decodedObjectOfClasses:(id)arg1 fromPackage:(id)arg2 userInfo:(id)arg3 error:(id *)arg4;
+ (id)decodedObjectOfClass:(Class)arg1 fromPackage:(id)arg2 error:(id *)arg3;
+ (id)decodedObjectOfClasses:(id)arg1 fromPackage:(id)arg2 error:(id *)arg3;

- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (_Bool)containsValueForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (id)_coderForKey:(id)arg1;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;
- (id)initWithCodingPackage:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (id)decodeRootObjectOfClasses:(id)arg1 error:(id *)arg2;
- (id)initWithCodingPackage:(id)arg1 error:(id *)arg2;

@end
