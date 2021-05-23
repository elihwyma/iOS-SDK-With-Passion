/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSMutableDictionary, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCProblemReport : NSObject <Swift>

{
    NSMutableDictionary *_problems;
    _Bool _needsSyncUp;
    int _state;
    NSNumber *_pendingRequestID;
}

@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) NSString *effectiveProblemMessage;
@property (nonatomic, readonly) NSSet *effectedRecordNames;
@property (retain, nonatomic) NSNumber *pendingRequestID;
@property (nonatomic) _Bool needsSyncUp;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addProblemWithType:(int)arg1 recordName:(id)arg2;
- (id)initWithProblemReport:(id)arg1;
- (int)_priorityForProblemType:(int)arg1;
- (int)_effectiveProblemType;
- (int)_zoneStateForProblemType:(int)arg1;
- (void)_addProblem:(id)arg1;

@end
