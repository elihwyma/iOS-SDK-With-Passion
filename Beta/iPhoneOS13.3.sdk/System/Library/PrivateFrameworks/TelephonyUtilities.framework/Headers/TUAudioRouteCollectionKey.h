/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TUAudioRouteCollectionKey : NSObject

{
    NSString *_category;
    NSString *_mode;
}

@property (copy, nonatomic, readonly) NSString *category;
@property (copy, nonatomic, readonly) NSString *mode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToAudioRouteCollectionKey:(id)arg1;
- (id)initWithCategory:(id)arg1 mode:(id)arg2;

@end
