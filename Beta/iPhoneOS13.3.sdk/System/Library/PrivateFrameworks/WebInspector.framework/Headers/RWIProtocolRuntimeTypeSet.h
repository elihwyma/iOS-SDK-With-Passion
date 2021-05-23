/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeTypeSet : RWIProtocolJSONObject

@property (nonatomic) _Bool isFunction;
@property (nonatomic) _Bool isUndefined;
@property (nonatomic) _Bool isNull;
@property (nonatomic) _Bool isBoolean;
@property (nonatomic) _Bool isInteger;
@property (nonatomic) _Bool isNumber;
@property (nonatomic) _Bool isString;
@property (nonatomic) _Bool isObject;
@property (nonatomic) _Bool isSymbol;

- (id)initWithIsFunction:(_Bool)arg1 isUndefined:(_Bool)arg2 isNull:(_Bool)arg3 isBoolean:(_Bool)arg4 isInteger:(_Bool)arg5 isNumber:(_Bool)arg6 isString:(_Bool)arg7 isObject:(_Bool)arg8 isSymbol:(_Bool)arg9;

@end
