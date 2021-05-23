/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest

{
    NSFetchRequest *_fetchRequest;
    id _requestCompletionBlock;
    long long _estimatedResultCount;
}

@property (readonly) NSFetchRequest *fetchRequest;
@property (readonly) CDUnknownBlockType completionBlock;
@property (nonatomic) long long estimatedResultCount;

- (void)dealloc;
- (id)description;
- (unsigned long long)requestType;
- (id)initWithFetchRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
