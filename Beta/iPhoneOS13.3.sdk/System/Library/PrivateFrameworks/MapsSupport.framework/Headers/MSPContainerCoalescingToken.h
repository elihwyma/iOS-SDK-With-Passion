/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPContainer, NSString;

@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface MSPContainerCoalescingToken : NSObject

{
    MSPContainer *_container;
    id <NSObject><NSCopying> _context;
    _Bool _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithContainerOwner:(id)arg1 context:(id)arg2;
- (void)endCoalescingEdits;

@end
