/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface ICMediaApplicationBannerSyncResponse : NSObject

{
    NSDictionary *_responseDictionary;
    NSArray *_commands;
    NSString *_status;
}

@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSArray *commands;
@property (nonatomic, readonly) NSString *status;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseDictionary:(id)arg1;

@end
