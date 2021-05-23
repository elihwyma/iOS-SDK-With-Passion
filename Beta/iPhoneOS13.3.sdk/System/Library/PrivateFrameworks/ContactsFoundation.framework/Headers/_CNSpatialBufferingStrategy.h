/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CNSpatialBufferingStrategy : NSObject

{
    unsigned long long _capacity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCapacity:(unsigned long long)arg1;
- (void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3;
- (void)bufferDidSendResults:(id)arg1;

@end
