/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_xpc_object;

@interface NEFileHandleMaintainer : NSObject

{
    _Bool _changed;
    _Bool _isOwnerMode;
    NSMutableArray *_fileHandles;
    CDUnknownBlockType _receivedHandlesCallback;
    NSObject<OS_xpc_object> *_auxiliaryDataDictionary;
    NSString *_eventName;
}

@property (retain) NSMutableArray *fileHandles;
@property _Bool changed;
@property (copy) CDUnknownBlockType receivedHandlesCallback;
@property _Bool isOwnerMode;
@property (retain) NSObject<OS_xpc_object> *auxiliaryDataDictionary;
@property (retain) NSString *eventName;

+ (id)sharedMaintainer;

- (id)init;
- (void)commit;
- (void)resetFileHandlesFromEvent:(id)arg1;
- (id)createEvent;
- (void)startOwnerModeWithEventName:(id)arg1 handlesReceivedCallback:(CDUnknownBlockType)arg2;
- (void)removeFileHandleMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)setFileHandle:(id)arg1 matchingPredicate:(CDUnknownBlockType)arg2;
- (void)iterateFileHandlesWithBlock:(CDUnknownBlockType)arg1;
- (void)setAuxiliaryData:(id)arg1 forKey:(id)arg2;
- (id)copyAuxiliaryDataForKey:(id)arg1;

@end
