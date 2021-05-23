/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FPDRequest : NSObject

{
    _Bool _fromPOSIX;
    int _pid;
    NSString *_processName;
    NSString *_executablePath;
}

@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly, getter=isFromPOSIX) _Bool fromPOSIX;
@property (nonatomic, readonly) NSString *shortDescription;

+ (_Bool)supportsSecureCoding;
+ (id)requestForSelf;
+ (id)requestForPID:(int)arg1;
+ (id)requestForPID:(int)arg1 fromPOSIX:(_Bool)arg2;
+ (id)UUIDForExecutablePath:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nsfpRequestWithIdentifier:(id)arg1 forSession:(id)arg2;
- (id)initWithPID:(int)arg1 fromPOSIX:(_Bool)arg2;

@end
