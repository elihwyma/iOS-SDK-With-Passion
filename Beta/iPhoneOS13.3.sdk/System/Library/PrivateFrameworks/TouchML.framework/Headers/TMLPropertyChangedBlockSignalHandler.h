/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <TouchML/TMLBlockSignalHandler.h>

@class NSString, TMLBinding;

@interface TMLPropertyChangedBlockSignalHandler : TMLBlockSignalHandler

{
    TMLBinding *_binding;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long bindingOrder;

- (void)detach;
- (void)attach;
- (void)bindingValueChanged:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 binding:(id)arg2;

@end
