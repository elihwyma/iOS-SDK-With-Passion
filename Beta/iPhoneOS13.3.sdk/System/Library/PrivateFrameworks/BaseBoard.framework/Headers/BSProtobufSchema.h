/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString;

@interface BSProtobufSchema : NSObject

{
    Class _rootClass;
    BSProtobufSchema *_superSchema;
    long long _fieldCount;
    long long _autotagIndex;
    struct _BSProtobufFieldEntry *_entries;
    NSMutableData *_memoryData;
    _Bool _respondsToDidFinishProtobufDecodingWithError;
    _Bool _respondsToInitForProtobufDecoding;
    _Bool _respondsToInitProtobufTranslatorForObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithRootClass:(Class)arg1;
- (void)addField:(const char *)arg1 forTag:(long long)arg2;
- (struct _BSProtobufFieldEntry *)_appendFieldEntriesOfCount:(long long)arg1;
- (void)_addSubclassesForField:(const char *)arg1 allowedSubclasses:(id)arg2 assertSubclassRelationship:(_Bool)arg3;
- (void)addRepeatingField:(const char *)arg1 forTag:(long long)arg2 allowedClasses:(id)arg3;
- (void)addField:(const char *)arg1;
- (void)addField:(const char *)arg1 allowedClasses:(id)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClasses:(id)arg2;
- (void)addRepeatingField:(const char *)arg1 containsClass:(Class)arg2 forTag:(long long)arg3;

@end
