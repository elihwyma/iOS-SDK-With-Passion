/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CLSSaveResponse : NSObject

{
    NSMutableDictionary *_objectsByID;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_deliverObject:(id)arg1;
- (oneway void)clientRemote_saveDone:(id)arg1;
- (id)savedObjectWithObjectID:(id)arg1;

@end
