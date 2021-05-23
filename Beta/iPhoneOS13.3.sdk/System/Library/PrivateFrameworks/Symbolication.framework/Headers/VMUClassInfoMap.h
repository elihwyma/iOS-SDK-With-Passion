/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface VMUClassInfoMap : NSObject

{
    void *_classInfoMap1;
    void *_classInfoMap2;
    NSMutableArray *_linearClassInfos;
    void *_fieldInfoMap1;
    void *_fieldInfoMap2;
    NSMutableArray *_linearFieldInfos;
}

@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, readonly) unsigned int fieldInfoCount;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (void)_destroyRetainedLinearArray:(id *)arg1 withCount:(unsigned int)arg2;
+ (void)_claimUnarchivingOfClass:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)indexForClassInfo:(id)arg1;
- (id *)_retainedLinearArrayWithReturnedCount:(unsigned int *)arg1;
- (void)enumerateInfosWithBlock:(CDUnknownBlockType)arg1;
- (id)classInfoForIndex:(unsigned int)arg1;
- (void)_applyTypeOverlay:(id)arg1;
- (id)swiftFieldWithName:(const char *)arg1 offset:(unsigned int)arg2 kind:(unsigned int)arg3 typeref:(struct swift_typeref_interop)arg4;
- (void)memoizeSwiftField:(id)arg1 withName:(const char *)arg2 offset:(unsigned int)arg3 kind:(unsigned int)arg4 typeref:(struct swift_typeref_interop)arg5;
- (id)classInfoForAddress:(unsigned long long)arg1;
- (unsigned int)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2;
- (unsigned int)indexForFieldInfo:(id)arg1;
- (id)fieldInfoForIndex:(unsigned int)arg1;
- (unsigned int)addFieldInfo:(id)arg1;
- (void)addClassInfosFromMap:(id)arg1;

@end
