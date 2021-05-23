/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface MapsSuggestionsQueue : NSObject <Swift>

{
    struct unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue>> _cppQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *innerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)serialQueueWithName:(struct NSString *)arg1;

- (id).cxx_construct;
- (id)initSerialQueueWithName:(struct NSString *)arg1;
- (void)syncBlock:(CDUnknownBlockType)arg1;
- (id)syncReturningBlock:(CDUnknownBlockType)arg1;
- (_Bool)syncBOOLReturningBlock:(CDUnknownBlockType)arg1;
- (void)asyncBlock:(CDUnknownBlockType)arg1;

@end
