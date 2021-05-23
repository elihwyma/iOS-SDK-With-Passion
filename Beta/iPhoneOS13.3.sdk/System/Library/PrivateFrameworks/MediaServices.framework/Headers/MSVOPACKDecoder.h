/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSCoder.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableArray, NSString;

@interface MSVOPACKDecoder : NSCoder

{
    NSArray *_objects;
    NSMapTable *_objectLookupTable;
    NSMutableArray *_wrapperStack;
    NSDictionary *_userInfo;
}

@property (nonatomic, readonly) NSArray *objects;
@property (nonatomic, readonly) NSMapTable *objectLookupTable;
@property (nonatomic, readonly) NSMutableArray *wrapperStack;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id *)arg4;
+ (id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id *)arg4;
+ (id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id *)arg3;

- (_Bool)allowsKeyedCoding;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (_Bool)containsValueForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (_Bool)requiresSecureCoding;
- (float)decodeFloatForKey:(id)arg1;
- (id)initForReadingFromData:(id)arg1 error:(id *)arg2;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;
- (id)decodeRootObjectOfClasses:(id)arg1 error:(id *)arg2;
- (void)beginDecodingPartialTopLevelObjectOfClasses:(id)arg1;
- (void)finishDecodingPartialTopLevelObject;
- (id)initForReadingFromData:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (id)_decodeOPACKObject:(id)arg1 ofClasses:(id)arg2;
- (void)_validateClass:(Class)arg1 fromSupportedClasses:(id)arg2;
- (id)_decodeNumberForKey:(id)arg1;

@end
