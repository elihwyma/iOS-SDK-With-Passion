/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VCPFingerprint : NSObject

{
    NSString *_master;
    NSString *_adjusted;
}

@property (readonly) NSString *master;
@property (readonly) NSString *adjusted;

+ (id)fingerprintWithMaster:(id)arg1 adjusted:(id)arg2;

- (id)init;
- (id)description;
- (id)initWithMaster:(id)arg1 adjusted:(id)arg2;
- (_Bool)isEqualToFingerprint:(id)arg1;

@end
