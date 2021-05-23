/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSItemProvider.h>

@interface NSItemProvider (LPExtras)

+ (id)_lp_itemProviderWithData:(id)arg1 MIMEType:(id)arg2;

- (void)_lp_loadFirstDataRepresentationMatchingMIMETypePredicate:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
