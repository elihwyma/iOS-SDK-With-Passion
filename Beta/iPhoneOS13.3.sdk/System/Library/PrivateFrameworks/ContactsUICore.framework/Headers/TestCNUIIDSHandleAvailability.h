/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@protocol CNUIIDSHandle;

@interface TestCNUIIDSHandleAvailability : NSObject

{
    _Bool _available;
    id <CNUIIDSHandle> _handle;
}

@property (retain, nonatomic) id <CNUIIDSHandle> handle;
@property (nonatomic) _Bool available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isAvailable;

- (_Bool)isEqual:(id)arg1;
- (id)initWithHandle:(id)arg1 availability:(_Bool)arg2;

@end
