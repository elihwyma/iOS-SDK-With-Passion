/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSError.h>

@class NSURL;

@interface NSError (FPFSHelpers)

@property (nonatomic, readonly) NSURL *fp_collidingURL;

+ (id)fileProviderErrorForNonExistentItemWithIdentifier:(id)arg1;
+ (id)fp_errorForCollisionWithURL:(id)arg1;
+ (id)fileProviderErrorForOutOfDateItem:(id)arg1;
+ (id)fileProviderErrorForCollisionWithItem:(id)arg1;

@end
