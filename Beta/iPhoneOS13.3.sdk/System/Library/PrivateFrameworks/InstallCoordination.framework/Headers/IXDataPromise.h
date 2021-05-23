/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSObject.h>

#import <InstallCoordination/Swift-Protocol.h>

@class IXDataPromiseSeed, NSError, NSString, NSUUID;

@interface IXDataPromise : NSObject <Swift>

{
    _Bool _complete;
    NSError *_error;
    unsigned long long _errorSourceIdentifier;
    IXDataPromiseSeed *_seed;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long errorSourceIdentifier;
@property (retain, nonatomic) IXDataPromiseSeed *seed;
@property (nonatomic, readonly) Class seedClass;
@property (nonatomic, getter=isComplete) _Bool complete;
@property (nonatomic) double percentComplete;
@property (nonatomic, readonly) NSError *localError;
@property (nonatomic, readonly) _Bool localIsComplete;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long creatorIdentifier;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) unsigned long long totalBytesNeededOnDisk;
@property (nonatomic, readonly) NSError *errorOccurred;

+ (_Bool)supportsSecureCoding;
+ (id)outstandingPromisesForCreator:(unsigned long long)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(id)arg1;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (void)_updateInitWithSeed:(id)arg1 notifyDaemon:(_Bool)arg2;
- (_Bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id *)arg3;
- (oneway void)_clientDelegate_didComplete;
- (oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)cancelForReason:(id)arg1 error:(id *)arg2;

@end
