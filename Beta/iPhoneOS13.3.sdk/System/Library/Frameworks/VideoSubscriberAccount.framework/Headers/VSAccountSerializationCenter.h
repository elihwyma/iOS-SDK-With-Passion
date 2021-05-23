/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSUndoManager, VSPersistentStorage;

@interface VSAccountSerializationCenter : NSObject

{
    NSOperationQueue *_serializationQueue;
    VSPersistentStorage *_storage;
}

@property (retain, nonatomic) NSOperationQueue *serializationQueue;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) NSUndoManager *undoManager;

+ (id)defaultSerializationCenter;

- (id)init;
- (id)exportDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
