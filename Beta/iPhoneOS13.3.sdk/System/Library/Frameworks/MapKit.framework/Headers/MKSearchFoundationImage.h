/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <SearchFoundation/SFImage.h>

@class NSObject;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface MKSearchFoundationImage : SFImage

{
    NSObject<OS_dispatch_group> *_group;
}

- (void)loadImageDataWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (void)loadImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initIconWithSize:(unsigned long long)arg1 mapItem:(id)arg2;

@end
