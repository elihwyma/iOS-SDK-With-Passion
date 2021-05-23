/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyIDSRequest : NSObject

{
    NSArray *_propertyItems;
    NSString *_listenerID;
    NSString *_service;
    CDUnknownBlockType _requestResultBlock;
    CDUnknownBlockType _idQueryResultHandler;
}

@property (retain, nonatomic) NSArray *propertyItems;
@property (retain, nonatomic) NSString *listenerID;
@property (retain, nonatomic) NSString *service;
@property (copy) CDUnknownBlockType requestResultBlock;
@property (copy, nonatomic) CDUnknownBlockType idQueryResultHandler;
@property (nonatomic, readonly) _Bool cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedWorkQueue;

- (void)cancel;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2 postToMainQueue:(_Bool)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)cleanupDelegate;
- (void)_requestStatusOnMainQueue:(_Bool)arg1;

@end
