/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@interface RWIProtocolJSONObject : NSObject

{
    RefPtr_568d2869 _object;
}

- (id)init;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (int)integerForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id).cxx_construct;
- (void)removeKey:(id)arg1;
- (id)initWithJSONObject:(const struct Object *)arg1;
- (RefPtr_568d2869)toJSONObject;
- (void)setJSONArray:(RefPtr_7a6ac2d3 *)arg1 forKey:(id)arg2;
- (RefPtr_7a6ac2d3)JSONArrayForKey:(id)arg1;

@end
