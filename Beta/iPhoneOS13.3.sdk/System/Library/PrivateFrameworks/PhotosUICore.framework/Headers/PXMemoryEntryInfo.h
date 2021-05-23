/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSDate;

@interface PXMemoryEntryInfo : NSObject <Swift>

{
    NSDate *_representativeDate;
    NSArray *_memories;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) NSDate *representativeDate;
@property (copy, nonatomic, readonly) NSArray *memories;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

+ (long long)compareMemoryInfo:(id)arg1 toMemoryInfo:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithMemories:(id)arg1;
- (id)initWithSortedMemories:(id)arg1;
- (unsigned long long)indexOfMemory:(id)arg1;
- (id)entryByAddingMemory:(id)arg1;
- (id)entryByRemovingMemory:(id)arg1;
- (id)entryByReplacingMemoryInfoAtIndex:(long long)arg1 withMemoryInfo:(id)arg2;

@end
