/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MetadataRange : NSObject

{
    int _type;
    int _startTime;
    int _duration;
    NSDictionary *_attributes;
}

@property (nonatomic) int type;
@property (nonatomic) int startTime;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSDictionary *attributes;

+ (id)descriptionForFacePositions:(int)arg1;
+ (id)descriptionForShotType:(int)arg1;
+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 startTime:(int)arg2 duration:(int)arg3 attributes:(id)arg4;
- (id)plistRepresentation;

@end
