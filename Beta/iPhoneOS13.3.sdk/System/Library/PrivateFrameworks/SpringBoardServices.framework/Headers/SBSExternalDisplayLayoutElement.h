/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <FrontBoardServices/FBSDisplayLayoutElement.h>

@interface SBSExternalDisplayLayoutElement : FBSDisplayLayoutElement

@property (nonatomic, readonly, getter=isPresenting) _Bool presenting;

+ (id)elementWithIdentifier:(id)arg1 presenting:(_Bool)arg2;

- (id)succinctDescriptionBuilder;

@end
