/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSString;

@interface CKObjCType : NSObject

{
    long long _code;
    NSString *_encoding;
    NSString *_name;
    NSString *_className;
    unsigned long long _size;
    unsigned long long _flags;
}

@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) NSString *encoding;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly, getter=isNumber) _Bool number;
@property (nonatomic, readonly, getter=isIntegerNumber) _Bool integerNumber;
@property (nonatomic, readonly, getter=isFloatingPointNumber) _Bool floatingPointNumber;
@property (nonatomic, readonly, getter=isObject) _Bool object;

+ (id)typeForEncoding:(const char *)arg1;
+ (id)typeForValue:(id)arg1;

- (id)initWithCode:(long long)arg1 encoding:(id)arg2 name:(id)arg3 className:(id)arg4 size:(unsigned long long)arg5 flags:(unsigned long long)arg6;
- (id)objectWithBytes:(const void *)arg1;
- (void)getBytes:(void *)arg1 forObject:(id)arg2;

@end
