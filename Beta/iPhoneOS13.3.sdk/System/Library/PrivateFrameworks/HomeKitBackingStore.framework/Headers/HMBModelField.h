/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/Swift-Protocol.h>

@class HMFVersion, NSString;

@interface HMBModelField : HMFObject <Swift>

{
    _Bool _encrypted;
    _Bool _excludeFromCloudStorage;
    _Bool _optional;
    _Bool _conformsToHMBModelNativeCKWrapper;
    Class _classObj;
    NSString *_externalRecordField;
    unsigned long long _loggingVisibility;
    id _defaultValue;
    HMFVersion *_readonlyVersion;
    HMFVersion *_unavailableVersion;
    CDUnknownBlockType _encodeBlock;
    CDUnknownBlockType _decodeBlock;
    CDUnknownBlockType _descriptionBlock;
}

@property (nonatomic, getter=isOptional) _Bool optional;
@property (nonatomic) unsigned long long loggingVisibility;
@property (retain, nonatomic) id defaultValue;
@property (copy, nonatomic) HMFVersion *readonlyVersion;
@property (copy, nonatomic) HMFVersion *unavailableVersion;
@property (retain, nonatomic) NSString *externalRecordField;
@property (nonatomic) _Bool encrypted;
@property (nonatomic) _Bool excludeFromCloudStorage;
@property (nonatomic) _Bool conformsToHMBModelNativeCKWrapper;
@property (copy, nonatomic) CDUnknownBlockType encodeBlock;
@property (copy, nonatomic) CDUnknownBlockType decodeBlock;
@property (copy, nonatomic) CDUnknownBlockType descriptionBlock;
@property (nonatomic, readonly) Class classObj;

+ (id)fieldWithClass:(Class)arg1;
+ (id)fieldWithClass:(Class)arg1 options:(id)arg2;
+ (id)optionalFieldWithClass:(Class)arg1;
+ (id)optionalFieldWithClass:(Class)arg1 options:(id)arg2;
+ (id)deprecatedField;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithClass:(Class)arg1;
- (id)decodeQueryableValue:(id)arg1;
- (id)encodeQueryableValue:(id)arg1;
- (id)initWithClass:(Class)arg1 options:(id)arg2;
- (id)descriptionForEncodedQueryableValue:(id)arg1;

@end
