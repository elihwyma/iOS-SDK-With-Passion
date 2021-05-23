/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OpenURLTarget : NSObject

{
    unsigned int _applicationState;
    struct {
        NSString *clientIdentifier;
        NSString *normalScheme;
        NSString *secureScheme;
    } _targetData;
    long long _targetIndex;
}

- (id)init;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithTargetIdentifier:(id)arg1;
- (id)copyURLForURL:(id)arg1;

@end
