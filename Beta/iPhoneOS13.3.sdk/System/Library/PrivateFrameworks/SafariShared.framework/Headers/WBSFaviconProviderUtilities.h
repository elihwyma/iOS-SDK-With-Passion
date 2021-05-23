/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSFaviconProviderUtilities : NSObject

+ (long long)computeRelativeSize:(struct CGSize)arg1 referenceSize:(struct CGSize)arg2;
+ (_Bool)isFaviconSize:(struct CGSize)arg1 morePreferrableThanFaviconSize:(struct CGSize)arg2 givenDesiredSize:(struct CGSize)arg3;
+ (struct CGSize)sizeOfImageWithData:(id)arg1 closestToPreferredSize:(struct CGSize)arg2 isMultiResolution:(_Bool *)arg3;
+ (id)multiResolutionImageFromImageData:(id)arg1 withPreferredSize:(struct CGSize)arg2 atScales:(id)arg3 didGenerateResolutions:(_Bool *)arg4;
+ (id)imageWithURL:(id)arg1 closetToPreferredSize:(struct CGSize)arg2;

@end
