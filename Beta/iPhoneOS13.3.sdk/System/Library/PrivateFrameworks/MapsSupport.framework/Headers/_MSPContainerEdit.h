/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

#import <MapsSupport/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MSPContainerEdit : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)ifAddition:(CDUnknownBlockType)arg1 ifRemoval:(CDUnknownBlockType)arg2 ifReplacement:(CDUnknownBlockType)arg3 ifContentUpdate:(CDUnknownBlockType)arg4 ifReplacedEntirely:(CDUnknownBlockType)arg5;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;

@end
