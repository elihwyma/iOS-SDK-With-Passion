/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEOClientRequestInfo : NSObject

{
    NSMutableDictionary *_requests;
}

@property (nonatomic, readonly) NSDictionary *requests;

- (id)init;
- (unsigned long long)countForRequestType:(unsigned char)arg1;
- (void)incrementCountForRequestType:(unsigned char)arg1;

@end
