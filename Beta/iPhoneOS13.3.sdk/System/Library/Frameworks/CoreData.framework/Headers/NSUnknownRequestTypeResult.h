/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreResult.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSUnknownRequestTypeResult : NSPersistentStoreResult

{
    NSArray *_subresults;
}

@property (readonly) NSArray *subresults;

- (void)dealloc;
- (id)initWithSubresults:(id)arg1;

@end
