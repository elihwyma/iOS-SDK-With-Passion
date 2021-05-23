/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSURL;

@interface WFFileCoder : NSObject <Swift>

{
    NSURL *_sharedDirectory;
    NSURL *_sharedTemporaryDirectory;
    long long _deletionResponsibility;
    long long _targetPlatform;
}

@property (copy, nonatomic) NSURL *sharedDirectory;
@property (copy, nonatomic) NSURL *sharedTemporaryDirectory;
@property (nonatomic) long long deletionResponsibility;
@property (nonatomic) long long targetPlatform;

+ (_Bool)supportsSecureCoding;
+ (id)sharedDirectoryFileArchiver;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)archiveFileAtURL:(id)arg1 fileIsTemporary:(_Bool)arg2 withCoder:(id)arg3;
- (id)decodeFileWithCoder:(id)arg1 fileIsTemporary:(_Bool *)arg2;
- (void)waitForFileAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
