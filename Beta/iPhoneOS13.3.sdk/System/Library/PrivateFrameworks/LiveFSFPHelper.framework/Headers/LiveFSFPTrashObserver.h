/*
 Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface LiveFSFPTrashObserver : NSObject

{
    NSMutableArray *_items;
    CDUnknownBlockType _completionHandler;
    NSData *_lastPage;
}

@property (retain) NSMutableArray *items;
@property (copy) CDUnknownBlockType completionHandler;
@property (retain, readonly) NSData *lastPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newWithCompletionHandler:(CDUnknownBlockType)arg1;

- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishEnumeratingWithError:(id)arg1;
- (void)didEnumerateItems:(id)arg1;
- (void)finishEnumeratingUpToPage:(id)arg1;

@end
