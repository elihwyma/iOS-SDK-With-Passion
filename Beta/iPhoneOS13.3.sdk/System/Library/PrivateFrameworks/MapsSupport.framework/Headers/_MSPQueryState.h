/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MSPQueryState : NSObject

{
    NSArray *_contents;
    NSArray *_identifiers;
}

@property (readonly) NSArray *contents;
@property (readonly) NSArray *identifiers;

- (id)initWithContainerContents:(id)arg1;
- (id)stateByInvokingPreprocessingBlock:(CDUnknownBlockType)arg1 mappingBlock:(CDUnknownBlockType)arg2;
- (id)stateByDeletingObjectsAtIndexes:(id)arg1;
- (id)stateByDeletingObjectAtIndex:(unsigned long long)arg1;
- (id)stateByMovingObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)initWithContents:(id)arg1 identifiers:(id)arg2;

@end
