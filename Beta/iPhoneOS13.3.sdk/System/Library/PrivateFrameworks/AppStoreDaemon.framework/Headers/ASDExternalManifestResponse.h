/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray, NSError;

@interface ASDExternalManifestResponse : ASDRequestResponse

{
    NSArray *_results;
}

@property (copy) NSError *error;
@property (nonatomic, readonly) NSArray *results;
@property _Bool success;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1;

@end
