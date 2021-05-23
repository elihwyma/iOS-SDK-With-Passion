/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface _UIPercentDrivenInteractionEffect : NSObject <Swift>

{
    CDUnknownBlockType _progressBlock;
}

@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1;

@end
