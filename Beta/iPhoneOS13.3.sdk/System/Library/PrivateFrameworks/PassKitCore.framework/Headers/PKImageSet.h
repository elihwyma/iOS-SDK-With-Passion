/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSURL;

@interface PKImageSet : NSObject <Swift>

{
    NSURL *_originCacheURL;
    long long _version;
}

@property (copy, nonatomic) NSURL *originCacheURL;
@property (nonatomic) long long version;

+ (_Bool)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (_Bool)shouldCache;
+ (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 fileURL:(id)arg5 cacheURL:(id)arg6;
+ (Class)classForDisplayProfile:(id)arg1 imageSetType:(long long)arg2;
+ (long long)imageSetType;
+ (id)createXPCContainerForImageSetWithType:(long long)arg1 displayProfile:(id)arg2 screenScale:(double)arg3 screenSize:(struct CGSize)arg4 suffix:(id)arg5 fileURL:(id)arg6 cacheURL:(id)arg7;
+ (Class)classForImageSetType:(long long)arg1;
+ (id)_createXPCContainerForImageSetWithType:(long long)arg1 displayProfile:(id)arg2 screenScale:(double)arg3 screenSize:(struct CGSize)arg4 suffix:(id)arg5 fileURL:(id)arg6 cacheURL:(id)arg7 imageSetOut:(id *)arg8;
+ (id)_archiveURL:(id)arg1;
+ (id)_archiveImageSetIfAppropriate:(id)arg1 screenScale:(double)arg2 screenSize:(struct CGSize)arg3 archiveURL:(id)arg4 cacheURL:(id)arg5;
+ (id)archiveName;
+ (id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 fileURL:(id)arg3 cacheURL:(id)arg4;
+ (id)createXPCContainerForImageSet:(id)arg1 screenScale:(double)arg2 screenSize:(struct CGSize)arg3 cacheURL:(id)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (_Bool)_isSetImage:(id)arg1 equalToImage:(id)arg2;
- (void)preheatImages;

@end
