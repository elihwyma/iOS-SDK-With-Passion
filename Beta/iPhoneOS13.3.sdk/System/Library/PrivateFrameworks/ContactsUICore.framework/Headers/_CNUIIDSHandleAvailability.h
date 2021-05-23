/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@protocol CNUIIDSHandle;

@interface _CNUIIDSHandleAvailability : NSObject

{
    _Bool _available;
    id <CNUIIDSHandle> _handle;
}

@property (nonatomic, readonly) id <CNUIIDSHandle> handle;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isAvailable;

- (id)initWithHandle:(id)arg1 available:(_Bool)arg2;

@end
