/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSOperation, NSString;

@protocol LSOpenResourceOperationDelegate;

__attribute__((visibility("hidden")))
@interface _LSOpenResourceOperationDelegateWrapper : NSObject

{
    NSOperation *_operation;
    id <LSOpenResourceOperationDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithOperation:(id)arg1 wrappedDelegate:(id)arg2;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperationDidComplete:(id)arg1;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;

@end
