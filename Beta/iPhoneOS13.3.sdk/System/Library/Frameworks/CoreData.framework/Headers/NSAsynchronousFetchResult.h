/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreAsynchronousResult.h>

@class NSArray, NSAsynchronousFetchRequest;

@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult

{
    NSAsynchronousFetchRequest *_fetchRequest;
    NSArray *_finalResult;
    id _intermediateResultCallback;
}

@property (retain) NSArray *finalResult;
@property (copy) CDUnknownBlockType intermediateResultCallback;
@property (readonly) NSAsynchronousFetchRequest *fetchRequest;

- (void)dealloc;
- (id)initForFetchRequest:(id)arg1 withContext:(id)arg2 andProgress:(id)arg3 completetionBlock:(CDUnknownBlockType)arg4;

@end
