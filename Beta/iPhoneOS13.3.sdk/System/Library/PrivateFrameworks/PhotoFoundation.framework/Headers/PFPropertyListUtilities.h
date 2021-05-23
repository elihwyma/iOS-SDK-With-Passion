/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFPropertyListUtilities : NSObject

+ (id)propertyListObjectFromEncodedData:(id)arg1 expectedClass:(Class)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)propertyListObjectFromEncodedData:(id)arg1 expectedClass:(Class)arg2 options:(unsigned long long)arg3;
+ (id)dictionaryFromEncodedData:(id)arg1;
+ (id)mutableDictionaryFromEncodedData:(id)arg1;
+ (id)arrayFromEncodedData:(id)arg1;
+ (id)mutableArrayFromEncodedData:(id)arg1;
+ (id)encodedDataWithPropertyListObject:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
+ (id)encodedDataWithPropertyListObject:(id)arg1;
+ (id)_filterDictionary:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)_filterArray:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)filterPropertyList:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)filterPropertyList:(id)arg1;
+ (id)filterPropertyListNoData:(id)arg1;
+ (_Bool)canEncodeInPropertyList:(id)arg1;

@end
