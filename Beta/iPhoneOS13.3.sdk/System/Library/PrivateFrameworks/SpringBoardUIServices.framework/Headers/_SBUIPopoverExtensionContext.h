/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSExtensionContext.h>

@protocol _SBUIPopoverExtensionHostInterface;

@interface _SBUIPopoverExtensionContext : NSExtensionContext

{
    id <_SBUIPopoverExtensionHostInterface> _hostService;
}

@property (weak, nonatomic) id <_SBUIPopoverExtensionHostInterface> hostService;

- (void)requestDismiss;

@end
