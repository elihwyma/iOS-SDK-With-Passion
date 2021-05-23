/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECMappingContext : NSObject

{
    struct map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>> mIndexToMappedIndex;
    NSMutableDictionary *mSheetNameToMappedIndex;
    struct __CFDictionary *mObjectToMappingInfo;
    NSMutableArray *mMappingInfos;
}

+ (id)mappingContext;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)mappingInfoCount;
- (ChVector_cc6fdd32 *)mappedSheetNames;
- (unsigned long long)mappedSheetIndexForSheetIndex:(unsigned long long)arg1;
- (unsigned long long)mappedSheetIndexForSheetName:(id)arg1;
- (id)mappingInfoForObject:(id)arg1;
- (id)mappingInfoAtIndex:(unsigned long long)arg1;
- (void)associateMappingInfo:(id)arg1 withSheetName:(id)arg2 andSheetIndex:(unsigned long long)arg3 andObject:(id)arg4;

@end
