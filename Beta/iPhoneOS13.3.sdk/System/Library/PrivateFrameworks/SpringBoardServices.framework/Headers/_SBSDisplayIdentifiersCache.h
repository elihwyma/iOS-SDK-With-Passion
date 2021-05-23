/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol OS_dispatch_queue;

@interface _SBSDisplayIdentifiersCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_displayIdentifiers;
    int _changedToken;
    CDUnknownBlockType _changedBlock;
}

- (id)init;
- (void)dealloc;
- (void)_queue_noteChanged;
- (id)displayIdentifiers;
- (void)registerChangedBlock:(CDUnknownBlockType)arg1;

@end
