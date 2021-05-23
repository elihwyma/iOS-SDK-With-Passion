/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSExtensionContext.h>

@interface NSExtensionContext (INUIHostedViewControlling)

@property (nonatomic, readonly) struct CGSize hostedViewMinimumAllowedSize;
@property (nonatomic, readonly) struct CGSize hostedViewMaximumAllowedSize;

- (id)interfaceParametersDescription;

@end
