/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface BLHLSKey : NSObject

{
    long long _method;
    NSURL *_url;
    NSString *_keyFormat;
    NSString *_keyFormatVersions;
    NSString *_iv;
}

@property (nonatomic, readonly) long long method;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *keyFormat;
@property (nonatomic, readonly) NSString *keyFormatVersions;
@property (nonatomic, readonly) NSString *iv;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)setPropertiesFromAttributeList:(id)arg1;
- (_Bool)isFormatSupported;
- (_Bool)isEqualToHLSKey:(id)arg1;

@end
