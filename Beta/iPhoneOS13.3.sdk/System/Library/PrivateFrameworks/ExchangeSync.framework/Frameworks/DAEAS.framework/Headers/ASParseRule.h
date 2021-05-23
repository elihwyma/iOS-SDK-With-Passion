/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ASParseRule : NSObject

{
    int _minimumNumber;
    int _maximumNumber;
    int _codePage;
    int _token;
    Class _objectClass;
    SEL _setterMethod;
    long long _dataclass;
    NSDictionary *_subclassRuleSet;
    NSDictionary *_callbackDict;
    NSDictionary *_streamCallbackDict;
}

- (int)token;
- (Class)objectClass;
- (long long)dataclass;
- (int)minimumNumber;
- (int)maximumNumber;
- (SEL)setterMethod;
- (int)codePage;
- (id)initWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 codePage:(int)arg3 token:(int)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 dataclass:(long long)arg7 callbackDict:(id)arg8 streamCallbackDict:(id)arg9 subclassRuleSet:(id)arg10;
- (id)subclassRuleSet;
- (id)callbackDict;
- (id)streamCallbackDict;

@end
