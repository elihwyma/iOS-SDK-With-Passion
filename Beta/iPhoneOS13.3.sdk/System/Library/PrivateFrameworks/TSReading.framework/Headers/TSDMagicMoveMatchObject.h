/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, TSDRep;

@interface TSDMagicMoveMatchObject : NSObject

{
    TSDRep *_rep;
    long long _zOrder;
    NSMutableDictionary *_attributes;
    NSString *_stringValue;
    NSString *_name;
    struct CGPoint _position;
    struct _NSRange _stringRange;
}

@property (retain, nonatomic) TSDRep *rep;
@property (nonatomic) struct CGPoint position;
@property (nonatomic) long long zOrder;
@property (retain, nonatomic) NSMutableDictionary *attributes;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) struct _NSRange stringRange;
@property (retain, nonatomic) NSString *name;

+ (id)matchObjectWithTextRep:(id)arg1 position:(struct CGPoint)arg2 stringValue:(id)arg3 stringRange:(struct _NSRange)arg4;
+ (id)matchObjectWithRep:(id)arg1 position:(struct CGPoint)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRep:(id)arg1 position:(struct CGPoint)arg2 stringValue:(id)arg3 stringRange:(struct _NSRange)arg4;
- (_Bool)conflictsWithMatchObject:(id)arg1;

@end
