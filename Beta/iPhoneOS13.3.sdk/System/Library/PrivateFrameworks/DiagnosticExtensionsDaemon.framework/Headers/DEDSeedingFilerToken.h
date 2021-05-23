/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface DEDSeedingFilerToken : NSObject

{
    NSNumber *_entityID;
    NSString *_token;
    NSString *_dsid;
    long long _submissionType;
}

@property (nonatomic, readonly) NSNumber *entityID;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) long long submissionType;

- (id)initWithEntityID:(id)arg1 type:(long long)arg2 token:(id)arg3 dsid:(id)arg4;
- (id)compiledEntityID;

@end
