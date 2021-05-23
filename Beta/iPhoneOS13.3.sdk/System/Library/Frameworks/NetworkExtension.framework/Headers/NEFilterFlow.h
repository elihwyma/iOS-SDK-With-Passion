/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEFilterAbsoluteVerdict, NSData, NSMutableArray, NSString, NSURL, NSUUID;

@protocol OS_dispatch_queue;

@interface NEFilterFlow : NSObject

{
    _Bool _isOpen;
    NEFilterAbsoluteVerdict *_currentVerdict;
    _Bool _isRemediationFlow;
    _Bool _isPaused;
    _Bool _reportAtEnd;
    _Bool _sourceAppIdentifierFromApp;
    int _pid;
    int _epid;
    NSURL *_URL;
    NSData *_sourceAppUniqueIdentifier;
    NSString *_sourceAppIdentifier;
    NSString *_sourceAppVersion;
    long long _direction;
    NSData *_sourceAppAuditToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_flowUUID;
    NSMutableArray *_savedMessageHandlerQueue;
    unsigned long long _inBytes;
    unsigned long long _outBytes;
    NSData *_crypto_signature;
}

@property (retain) NEFilterAbsoluteVerdict *currentVerdict;
@property _Bool isOpen;
@property _Bool isRemediationFlow;
@property (copy) NSString *sourceAppIdentifier;
@property (copy) NSString *sourceAppVersion;
@property (copy) NSData *sourceAppUniqueIdentifier;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) NSURL *URL;
@property (copy) NSUUID *flowUUID;
@property int pid;
@property int epid;
@property long long direction;
@property (retain) NSData *sourceAppAuditToken;
@property _Bool isPaused;
@property (retain) NSMutableArray *savedMessageHandlerQueue;
@property _Bool reportAtEnd;
@property _Bool sourceAppIdentifierFromApp;
@property unsigned long long inBytes;
@property unsigned long long outBytes;
@property (retain) NSData *crypto_signature;
@property (readonly) NSUUID *identifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)close;
- (void)copySourceAppInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 sourceAppIdentifier:(id)arg2;

@end
