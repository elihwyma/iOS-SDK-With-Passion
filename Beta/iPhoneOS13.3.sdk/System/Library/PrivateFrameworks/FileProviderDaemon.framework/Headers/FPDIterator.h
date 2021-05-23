/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface FPDIterator : NSObject

{
    _Bool _skipMaterializedTreeTraversal;
    _Bool _shouldDecorateItems;
    NSError *_error;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long numFoldersPopped;
@property (nonatomic, readonly) _Bool done;
@property (nonatomic) _Bool skipMaterializedTreeTraversal;
@property (nonatomic) _Bool shouldDecorateItems;

+ (id)iteratorForLocator:(id)arg1 manager:(id)arg2;
+ (id)iteratorForLocator:(id)arg1 provider:(id)arg2;

- (id)nextItem;
- (id)nextWithError:(id *)arg1;

@end
