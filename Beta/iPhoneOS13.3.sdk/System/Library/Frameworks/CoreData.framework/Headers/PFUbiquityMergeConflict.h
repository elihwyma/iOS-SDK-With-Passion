/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSMergeConflict.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityMergeConflict : NSMergeConflict

{
    NSDictionary *_ancestorSnapshot;
}

@property (retain) NSDictionary *ancestorSnapshot;

- (void)dealloc;
- (id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;

@end
