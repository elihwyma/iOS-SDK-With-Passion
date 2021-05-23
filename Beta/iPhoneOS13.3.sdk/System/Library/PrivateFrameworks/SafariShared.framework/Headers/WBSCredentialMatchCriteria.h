/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface WBSCredentialMatchCriteria : NSObject

{
    unsigned long long _options;
    NSURL *_URL;
    NSString *_partialUsername;
}

@property (nonatomic, readonly) unsigned long long options;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSString *partialUsername;

- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 partialUsername:(id)arg3;

@end
