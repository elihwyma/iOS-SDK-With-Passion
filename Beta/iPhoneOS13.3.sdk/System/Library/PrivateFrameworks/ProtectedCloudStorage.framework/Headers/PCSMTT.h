/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSUUID;

@interface PCSMTT : NSObject

{
    NSDate *_startTime;
    NSMutableArray *_completedPoints;
    NSUUID *_parentUUID;
    NSUUID *_UUID;
    double _time;
}

@property (retain) NSDate *startTime;
@property (retain) NSMutableArray *completedPoints;
@property (readonly) NSUUID *parentUUID;
@property (readonly) NSUUID *UUID;
@property (readonly) double time;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)stop;
- (void)start;
- (id)measurePoint:(id)arg1;
- (void)completePoint:(id)arg1;
- (id)jsonDict;
- (id)initWithMTT:(id)arg1;
- (void)measure:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)measure:(id)arg1 success:(_Bool)arg2 time:(double)arg3;

@end
