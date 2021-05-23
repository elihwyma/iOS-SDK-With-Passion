/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSNumber.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNSNumber : NSNumber

{
    int _type;
    union {
        struct ObjectStorage<API::Number<bool, API::Object::Type::Boolean>> _boolean;
        struct ObjectStorage<API::Number<double, API::Object::Type::Double>> _double;
        struct ObjectStorage<API::Number<unsigned long long, API::Object::Type::UInt64>> _uint64;
        struct ObjectStorage<API::Number<long long, API::Object::Type::Int64>> _int64;
    } _number;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (double)doubleValue;
- (long long)longLongValue;
- (unsigned long long)unsignedLongLongValue;
- (const char *)objCType;
- (BOOL)charValue;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getValue:(void *)arg1;

@end
