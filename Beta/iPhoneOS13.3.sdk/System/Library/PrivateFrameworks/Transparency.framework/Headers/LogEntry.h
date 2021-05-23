/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSData, NSMutableArray, SignedLogHead, TransparencyLogEntryVerifier, TransparencyManagedDataStore;

@interface LogEntry

@property (retain) TransparencyLogEntryVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (nonatomic) int logType;
@property (retain, nonatomic) SignedLogHead *slh;
@property (nonatomic) _Bool hasSlh;
@property (retain, nonatomic) NSMutableArray *hashesOfPeersInPathToRootArray;
@property (nonatomic, readonly) unsigned long long hashesOfPeersInPathToRootArray_Count;
@property (copy, nonatomic) NSData *nodeBytes;
@property (nonatomic) unsigned long long nodePosition;

+ (id)descriptor;

- (_Bool)verifyWithError:(id *)arg1;
- (_Bool)verifyTLTEntryForPerApplicationLogHead:(id)arg1 error:(id *)arg2;

@end
