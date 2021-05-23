/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface NSObservedValue : NSObject

{
    id _contents;
    id _lastOriginator;
    int _tag;
}

@property (retain) id value;
@property (retain) NSError *error;
@property _Bool finished;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (_Bool)_isToManyChangeInformation;
- (id)copyToHeap;

@end
