/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface QLListCellManager : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_operations;
    NSOperationQueue *_generationQueue;
}

@property (retain, nonatomic) NSMutableDictionary *operations;
@property (retain, nonatomic) NSOperationQueue *generationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_operationDidFinish:(id)arg1;
- (void)setupCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)operation:(id)arg1 didGenerateThumbnail:(id)arg2;
- (void)operation:(id)arg1 didDetermineFileSize:(id)arg2 fileTypeString:(id)arg3;

@end
