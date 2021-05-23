/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL;

@interface WBSSiteMetadataRequest : NSObject

{
    NSURL *_url;
    NSDictionary *_extraInfo;
}

@property (nonatomic, readonly) NSURL *url;
@property (copy, nonatomic, readonly) NSDictionary *extraInfo;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;

@end
