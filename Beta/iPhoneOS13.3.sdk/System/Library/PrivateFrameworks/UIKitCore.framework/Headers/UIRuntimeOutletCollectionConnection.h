/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIRuntimeConnection.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection

{
    NSString *runtimeCollectionClassName;
    _Bool addsContentToExistingCollection;
}

@property (copy) NSString *runtimeCollectionClassName;
@property _Bool addsContentToExistingCollection;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)connect;
- (void)connectForSimulator;
- (void)performConnect;

@end
