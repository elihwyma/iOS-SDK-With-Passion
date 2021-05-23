/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKSample, NSArray, NSMutableSet, NSString;

@protocol HDSampleIterator><HDRestorableIterator;

@interface HDDistinctByKeyPathsIterator : NSObject

{
    id <HDSampleIterator><HDRestorableIterator> _sourceIterator;
    NSArray *_keyPaths;
    NSMutableSet *_seenValues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HKSample *sample;
@property (nonatomic, readonly) long long objectID;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)object;
- (_Bool)advanceWithError:(id *)arg1;
- (_Bool)restoreIteratorStateFromData:(id)arg1 error:(id *)arg2;
- (id)iteratorStateData;
- (id)initWithSourceIterator:(id)arg1 keyPaths:(id)arg2;

@end
