/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPCloudKitInfo : PBCodable

{
    unsigned long long _reportClientOperationFrequency;
    unsigned long long _reportClientOperationFrequencyBase;
    unsigned long long _reportOperationGroupFrequency;
    unsigned long long _reportOperationGroupFrequencyBase;
    NSString *_clientBundleId;
    NSMutableArray *_clientOperations;
    NSString *_clientProcessVersion;
    NSString *_container;
    NSString *_environment;
    NSMutableArray *_operationGroups;
    _Bool _anonymous;
    struct {
        unsigned int reportClientOperationFrequency:1;
        unsigned int reportClientOperationFrequencyBase:1;
        unsigned int reportOperationGroupFrequency:1;
        unsigned int reportOperationGroupFrequencyBase:1;
        unsigned int anonymous:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasClientProcessVersion;
@property (retain, nonatomic) NSString *clientProcessVersion;
@property (nonatomic, readonly) _Bool hasClientBundleId;
@property (retain, nonatomic) NSString *clientBundleId;
@property (nonatomic, readonly) _Bool hasContainer;
@property (retain, nonatomic) NSString *container;
@property (nonatomic, readonly) _Bool hasEnvironment;
@property (retain, nonatomic) NSString *environment;
@property (nonatomic) _Bool hasAnonymous;
@property (nonatomic) _Bool anonymous;
@property (retain, nonatomic) NSMutableArray *operationGroups;
@property (nonatomic) _Bool hasReportOperationGroupFrequency;
@property (nonatomic) unsigned long long reportOperationGroupFrequency;
@property (nonatomic) _Bool hasReportOperationGroupFrequencyBase;
@property (nonatomic) unsigned long long reportOperationGroupFrequencyBase;
@property (retain, nonatomic) NSMutableArray *clientOperations;
@property (nonatomic) _Bool hasReportClientOperationFrequency;
@property (nonatomic) unsigned long long reportClientOperationFrequency;
@property (nonatomic) _Bool hasReportClientOperationFrequencyBase;
@property (nonatomic) unsigned long long reportClientOperationFrequencyBase;

+ (Class)operationGroupType;
+ (Class)clientOperationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addOperationGroup:(id)arg1;
- (void)addClientOperation:(id)arg1;
- (unsigned long long)operationGroupsCount;
- (void)clearOperationGroups;
- (id)operationGroupAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientOperationsCount;
- (void)clearClientOperations;
- (id)clientOperationAtIndex:(unsigned long long)arg1;

@end
