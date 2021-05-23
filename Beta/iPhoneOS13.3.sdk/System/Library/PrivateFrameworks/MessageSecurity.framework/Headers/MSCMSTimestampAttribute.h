/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class MSCMSSignerInfo, MSOID, NSArray, NSDate, NSURL;

__attribute__((visibility("hidden")))
@interface MSCMSTimestampAttribute : NSObject

{
    _Bool _certChainRequested;
    NSURL *_serverURL;
    MSCMSSignerInfo *_singerInfo;
    NSArray *_certificates;
    MSOID *_digestAlgorithm;
    NSDate *_timestampTime;
}

@property (retain) NSURL *serverURL;
@property _Bool certChainRequested;
@property (readonly) MSCMSSignerInfo *singerInfo;
@property (readonly) NSArray *certificates;
@property (readonly) MSOID *digestAlgorithm;
@property (readonly) NSDate *timestampTime;

- (id)initWithServerURL:(id)arg1;
- (_Bool)verifyTimestamps:(id *)arg1;
- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;
- (id)initWithServerURL:(id)arg1 chainRequested:(_Bool)arg2;
- (id)initWithTimestampToken:(id)arg1;

@end
