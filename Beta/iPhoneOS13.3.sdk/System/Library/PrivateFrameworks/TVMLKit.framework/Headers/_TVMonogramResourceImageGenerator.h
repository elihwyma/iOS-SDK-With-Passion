/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVMonogramImageGenerator.h>

@interface _TVMonogramResourceImageGenerator : _TVMonogramImageGenerator

+ (_Bool)isResourceURL:(id)arg1;
+ (id)tintImage:(id)arg1 withColor:(id)arg2;

- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)cancelLoad:(id)arg1;

@end
