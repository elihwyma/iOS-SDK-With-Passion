/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSString;

@protocol NSObject;

@interface BSDescriptionBuilder : NSObject

{
    id <NSObject> _object;
    NSMutableString *_proem;
    NSMutableString *_description;
    int _activeComponent;
    NSString *_activePrefix;
    _Bool _useDebugDescription;
}

@property (nonatomic) int activeComponent;
@property (retain, nonatomic) NSString *activeMultilinePrefix;
@property (nonatomic) _Bool useDebugDescription;

+ (id)builderWithObject:(id)arg1;
+ (id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2;
+ (id)descriptionForObject:(id)arg1;
+ (id)componentSeparator;
+ (id)nameObjectSeparator;
+ (id)succinctDescriptionForObject:(id)arg1;

- (id)initWithObject:(id)arg1;
- (id)appendString:(id)arg1;
- (id)appendFormat:(id)arg1;
- (id)build;
- (void)appendString:(id)arg1 withName:(id)arg2;
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4;
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(_Bool)arg3;
- (void)appendBodySectionWithName:(id)arg1 multilinePrefix:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;
- (id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)appendBool:(_Bool)arg1 withName:(id)arg2 ifEqualTo:(_Bool)arg3;
- (void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;
- (id)appendInt:(int)arg1 withName:(id)arg2;
- (id)appendInteger:(long long)arg1 withName:(id)arg2;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;
- (id)appendUnsignedInt:(unsigned int)arg1 withName:(id)arg2;
- (id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(_Bool)arg3;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;
- (id)appendObjectsAndNames:(id)arg1 args:(char *)arg2;
- (id)appendObjectWithName:(id)arg1 formatBlock:(CDUnknownBlockType)arg2;
- (id)appendBool:(_Bool)arg1 withName:(id)arg2;
- (id)appendFlag:(long long)arg1 withName:(id)arg2 skipIfNotSet:(_Bool)arg3;
- (id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendCString:(const char *)arg1 withName:(id)arg2;
- (void)tryAppendKey:(id)arg1;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4 objectTransformer:(CDUnknownBlockType)arg5;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(_Bool)arg4 objectTransformer:(CDUnknownBlockType)arg5;
- (id)appendSuper;
- (id)appendFlag:(long long)arg1 withName:(id)arg2;
- (id)appendInt64:(long long)arg1 withName:(id)arg2;
- (id)appendFloat:(double)arg1 withName:(id)arg2;
- (id)appendPointer:(void *)arg1 withName:(id)arg2;
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;
- (id)appendQueue:(id)arg1 withName:(id)arg2;
- (id)appendPoint:(struct CGPoint)arg1 withName:(id)arg2;
- (id)appendSize:(struct CGSize)arg1 withName:(id)arg2;
- (id)appendRect:(struct CGRect)arg1 withName:(id)arg2;
- (id)appendClass:(Class)arg1 withName:(id)arg2;
- (id)appendObjectsAndNames:(id)arg1;
- (id)appendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)modifyProem:(CDUnknownBlockType)arg1;
- (id)modifyBody:(CDUnknownBlockType)arg1;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3 objectTransformer:(CDUnknownBlockType)arg4;

@end
