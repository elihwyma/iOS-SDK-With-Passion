/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPFetcherResponse.h>

@class LPImage, NSString;

__attribute__((visibility("hidden")))
@interface LPFetcherImageResponse : LPFetcherResponse

{
    LPImage *_image;
}

@property (retain, nonatomic, readonly) LPImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isValidMIMEType:(id)arg1;
+ (id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3;
+ (id)imagePropertiesForFetcher:(id)arg1;

- (id)initWithImage:(id)arg1 fetcher:(id)arg2;

@end
