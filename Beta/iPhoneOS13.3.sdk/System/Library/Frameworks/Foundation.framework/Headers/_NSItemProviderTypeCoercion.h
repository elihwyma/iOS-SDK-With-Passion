/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSItemProviderTypeCoercion : NSObject

{
    id _value;
    Class _targetClass;
}

@property (retain) id value;
@property (copy) Class targetClass;

+ (id)typeCoercionForValue:(id)arg1 targetClass:(Class)arg2;

- (void)dealloc;
- (id)coerceValueError:(id *)arg1;
- (_Bool)shouldCoerceForCoding;
- (id)_NSItemProviderTypeCoercion_coercedNSDataValueFromNSURLValue:(id)arg1 error:(id *)arg2;
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSURLValue:(id)arg1 error:(id *)arg2;
- (id)_NSItemProviderTypeCoercion_coercedNSFileWrapperValueFromNSDataValue:(id)arg1 error:(id *)arg2;

@end
