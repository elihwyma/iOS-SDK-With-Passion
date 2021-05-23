/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPFetcher, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaAsset : NSObject

{
    Class _customFetcherClass;
    long long _type;
    NSURL *_URL;
    NSDictionary *_colors;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSDictionary *colors;
@property (copy, nonatomic, readonly) NSString *name;
@property (retain, nonatomic, readonly) LPFetcher *fetcher;

- (id)metadata;
- (id)initWithVideoURL:(id)arg1 name:(id)arg2;
- (id)initWithImageURL:(id)arg1 colors:(id)arg2 name:(id)arg3;
- (id)initWithName:(id)arg1 customFetcherClass:(Class)arg2;

@end
