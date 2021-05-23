/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSDictionary, NSURL;

@interface ICInAppMessageConfiguration : NSObject

{
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) NSURL *reportEventURL;
@property (nonatomic, readonly) NSURL *serialCheckURL;
@property (nonatomic, readonly) NSURL *syncURL;
@property (nonatomic, readonly) NSURL *resourceDomainURL;
@property (nonatomic, readonly) long long syncPollingInterval;

- (id)initWithDictionary:(id)arg1;

@end
