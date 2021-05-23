/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVMonogramImageGenerator.h>

@interface _TVMonogramInitialsSilhouetteImageGenerator : _TVMonogramImageGenerator

+ (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;
+ (id)monogramImageWithDescription:(id)arg1;
+ (_Bool)_isRomanName:(id)arg1;

- (id)imageKeyForObject:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)cancelLoad:(id)arg1;

@end
