/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _BKSEventFocusChangeObserverInfo : NSObject

{
    _Bool _valid;
    unsigned long long _propertyUpdateGeneration;
}

@property unsigned long long propertyUpdateGeneration;
@property (getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;

@end
