/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class MAAssetQuery, NSString;

__attribute__((visibility("hidden")))
@interface SFDeviceQueryParameters : NSObject

{
    _Bool _installedOnly;
    _Bool _imperfectMatch;
    _Bool _fallback;
    MAAssetQuery *_maQuery;
}

@property (nonatomic, readonly) MAAssetQuery *maQuery;
@property (nonatomic, readonly) _Bool installedOnly;
@property (nonatomic, readonly) _Bool imperfectMatch;
@property (nonatomic, readonly) _Bool fallback;
@property (nonatomic, readonly) NSString *queryType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDeviceAssetQuery:(id)arg1 installedOnly:(_Bool)arg2 imperfectMatch:(_Bool)arg3 fallback:(_Bool)arg4;
- (id)maAssetQueryDescription;

@end
