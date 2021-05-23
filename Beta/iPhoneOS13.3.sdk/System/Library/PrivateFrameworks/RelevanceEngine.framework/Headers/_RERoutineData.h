/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _RERoutineData : NSObject

{
    long long _mode;
    NSArray *_locationsOfInterest;
}

@property (nonatomic) long long mode;
@property (retain, nonatomic) NSArray *locationsOfInterest;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isEqualToRoutineData:(id)arg1;

@end
