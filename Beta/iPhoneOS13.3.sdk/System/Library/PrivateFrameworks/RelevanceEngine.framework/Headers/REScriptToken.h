/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface REScriptToken : NSObject

{
    long long _line;
    long long _column;
    NSString *_value;
    unsigned long long _type;
}

@property (nonatomic, readonly) long long line;
@property (nonatomic, readonly) long long column;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) unsigned long long type;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2 line:(long long)arg3 column:(long long)arg4;

@end
