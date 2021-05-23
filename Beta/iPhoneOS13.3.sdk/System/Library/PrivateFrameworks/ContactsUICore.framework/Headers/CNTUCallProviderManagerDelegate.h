/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@interface CNTUCallProviderManagerDelegate : NSObject

{
    CDUnknownBlockType _block;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)providersChangedForProviderManager:(id)arg1;

@end
