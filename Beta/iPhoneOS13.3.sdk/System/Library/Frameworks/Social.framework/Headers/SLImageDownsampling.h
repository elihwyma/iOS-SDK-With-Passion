/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@interface SLImageDownsampling : NSObject

+ (void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 resultsHandler:(CDUnknownBlockType)arg3;
+ (id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2;
+ (CDStruct_912cb5d2)imageSizeWithData:(id)arg1;
+ (id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2;
+ (void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 resultsHandler:(CDUnknownBlockType)arg3;

@end
