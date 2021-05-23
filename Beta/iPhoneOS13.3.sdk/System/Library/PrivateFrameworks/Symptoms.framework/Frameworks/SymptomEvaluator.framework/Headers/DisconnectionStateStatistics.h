/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface DisconnectionStateStatistics : NSObject

{
    NSSet *_daysOfWeek;
    unsigned long long _periodId;
    NSString *_disconnectedFromNetworkId;
    NSString *_connectToNetworkId;
    NSMutableArray *_networkStateRecords;
    unsigned long long _averageDisconnectionLength;
}

@property (readonly) NSSet *daysOfWeek;
@property (readonly) unsigned long long periodId;
@property (readonly) NSString *disconnectedFromNetworkId;
@property (readonly) NSString *connectToNetworkId;
@property (readonly) NSMutableArray *networkStateRecords;
@property (readonly) unsigned long long averageDisconnectionLength;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDaysOfWeek:(id)arg1 periodId:(unsigned long long)arg2 forNetworkStateRecord:(id)arg3;
- (_Bool)isMergeableWithDisconnectionStateStatistics:(id)arg1;
- (void)mergeDisconnectionStateStatistics:(id)arg1;
- (void)calculateAverageLength;

@end
