/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSString;

@interface WBSCyclerStatus : NSObject <Swift>

{
    _Bool _connectedToTestTarget;
    _Bool _running;
    NSString *_activeTestSuiteName;
    unsigned long long _seed;
}

@property (copy, nonatomic, readonly) NSString *activeTestSuiteName;
@property (nonatomic, readonly) unsigned long long seed;
@property (nonatomic, readonly, getter=isConnectedToTestTarget) _Bool connectedToTestTarget;
@property (nonatomic, readonly, getter=isRunning) _Bool running;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActiveTestSuiteName:(id)arg1 seed:(unsigned long long)arg2 isConnectedToTestTarget:(_Bool)arg3 isRunning:(_Bool)arg4;

@end
