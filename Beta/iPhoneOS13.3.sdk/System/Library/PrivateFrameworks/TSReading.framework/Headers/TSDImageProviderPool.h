/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSUPointerKeyDictionary;

@interface TSDImageProviderPool : NSObject

{
    TSUPointerKeyDictionary *mImageDataToImageProviderMap;
    unsigned long long mOpenFileDescriptorLimit;
    _Bool mHaveRaisedFileDescriptorLimit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedPool;
+ (id)_singletonAlloc;
+ (_Bool)isValidImageData:(id)arg1;
+ (Class)p_providerClassForData:(id)arg1;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)willCullData:(id)arg1;
- (id)temporaryProviderForData:(id)arg1 shouldValidate:(_Bool)arg2;
- (void)addInterestInProviderForData:(id)arg1;
- (void)removeInterestInProviderForData:(id)arg1;
- (id)providerForData:(id)arg1 shouldValidate:(_Bool)arg2;
- (void)p_updateFileDescriptorLimit;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (id)p_providerForData:(id)arg1 temporary:(_Bool)arg2 shouldValidate:(_Bool)arg3;
- (unsigned long long)p_providerLimitForFileDescriptorLimit:(unsigned long long)arg1;
- (void)p_freeFileDescriptorsWithProviderCount:(unsigned long long)arg1;
- (unsigned long long)p_removeProvidersWithZeroInterest;
- (void)willCloseDocumentContext:(id)arg1;
- (void)flushImageProviders;

@end
