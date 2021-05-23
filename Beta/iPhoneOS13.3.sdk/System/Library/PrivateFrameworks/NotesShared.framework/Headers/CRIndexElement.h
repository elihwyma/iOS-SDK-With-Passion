/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface CRIndexElement : NSObject

{
    NSUUID *_replica;
    long long _integer;
}

@property (retain, nonatomic) NSUUID *replica;
@property (nonatomic) long long integer;

+ (id)elementWithInteger:(long long)arg1 replica:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hashValue;
- (id)initWithInteger:(long long)arg1 replica:(id)arg2;

@end
