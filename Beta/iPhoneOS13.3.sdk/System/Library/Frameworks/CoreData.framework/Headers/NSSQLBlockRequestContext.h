/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStoreRequestContext.h>

__attribute__((visibility("hidden")))
@interface NSSQLBlockRequestContext : NSSQLStoreRequestContext

{
    CDUnknownBlockType _workBlock;
}

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (_Bool)isWritingRequest;
- (_Bool)executeRequestCore:(id *)arg1;

@end
