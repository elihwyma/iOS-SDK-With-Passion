/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface TIPersistentQueue : NSObject

{
    NSURL *_presentedItemURL;
}

- (id)initWithURL:(id)arg1;
- (void)enqueueObjects:(CDUnknownBlockType)arg1;
- (void)readObjects:(CDUnknownBlockType)arg1;
- (void)dequeueObjects:(CDUnknownBlockType)arg1;

@end
