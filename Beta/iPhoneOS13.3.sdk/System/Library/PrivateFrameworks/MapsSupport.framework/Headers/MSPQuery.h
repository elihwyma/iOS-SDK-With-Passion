/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPQuerySource, NSArray, NSString, _MSPQueryState;

@protocol OS_dispatch_queue;

@interface MSPQuery : NSObject

{
    _MSPQueryState *_lastState;
    MSPQuerySource *_source;
    CDUnknownBlockType _changeHandler;
    NSObject<OS_dispatch_queue> *_changeHandlerQueue;
    NSArray *_unmappedContents;
}

@property (retain, getter=_lastState, setter=_setLastState:) _MSPQueryState *lastState;
@property (readonly, getter=_visibleState) _MSPQueryState *visibleState;
@property (readonly) NSArray *contents;
@property (copy, nonatomic, readonly) CDUnknownBlockType changeHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *changeHandlerQueue;
@property (nonatomic, readonly) NSArray *unmappedContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_initWithSource:(id)arg1;
- (void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3;
- (id)originalIdentifierForObject:(id)arg1;
- (id)originalIdentifierForObjectAtIndex:(unsigned long long)arg1;
- (void)setChangeHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end
