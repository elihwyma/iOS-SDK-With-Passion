/*
 Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

#import <Foundation/NSObject.h>

@class CPMLSchema, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@protocol CPMLAlgorithmProtocol, OS_dispatch_queue;

@interface CPMLDB : NSObject

{
    unsigned long long *repFields;
    unsigned long long maxFieldCount;
    unsigned int commitCountMax;
    unsigned int currentCommitCount;
    unsigned int rowCount;
    double *cardinality;
    double *min;
    double *max;
    double *mean;
    double *sumOfX;
    double *sumOfXX;
    double *sigma;
    CPMLSchema *cpSchema;
    NSMutableArray *indexer;
    NSMutableDictionary *vectorListCardinality;
    NSMutableString *dbTableName;
    double currentTimeInterval;
    double minTimeToLogIndex;
    int _openCPMLDBOptions;
    NSDictionary *_cInfo;
    NSString *_trainingModelFileAndPath;
    NSString *_trainingFile;
    id <CPMLAlgorithmProtocol> _thedelegate;
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    struct sqlite3 *db;
    NSString *_dbFileName;
}

@property (readonly) CPMLSchema *cpSchema;
@property (nonatomic, readonly) struct sqlite3 *db;
@property (readonly) NSString *dbFileName;

+ (id)getConfigurationFromPlist:(id)arg1;

- (void)dealloc;
- (_Bool)reset;
- (void)setDispatchQueue:(id)arg1;
- (id)addValues:(int)arg1;
- (void)restart;
- (void)updateStatistics;
- (id)initWithDBName:(id)arg1 withPlistPath:(id)arg2 withWriteOptions:(int)arg3;
- (id)initWithDBName:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3;
- (id)getDelegate;
- (void)flushDB;
- (id)fileProtectionClassRequest:(id)arg1;
- (id)getDispatchQueue;
- (void)removeTrainingRowData:(double)arg1;
- (unsigned long long)getColumnCount;
- (int)getYColumnPosition;
- (unsigned long long)getCombinedRemapTableCardinality:(unsigned int)arg1;
- (unsigned long long)getRowCount;
- (_Bool)isColumnContinousData:(unsigned int)arg1;
- (unsigned long long)getCardinality:(unsigned int)arg1;
- (int)getSchemaType:(unsigned long long)arg1;
- (double)getMeanFor:(unsigned int)arg1;
- (double)getStdDevFor:(unsigned int)arg1;
- (double)getMinFor:(unsigned int)arg1;
- (double)getMaxFor:(unsigned int)arg1;
- (id)getRemapTable;
- (void)setCPMLAlgorithm:(id)arg1;
- (id)getColumnName:(unsigned long long)arg1;
- (int)getVectorContent:(unsigned long long)arg1;
- (_Bool)logNSDictionary:(id)arg1;
- (id)initWithDBName:(id)arg1 dataFromFile:(id)arg2 withPlistPath:(id)arg3 withWriteOptions:(int)arg4;
- (void)doInitialize:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3;
- (void)createTable:(id)arg1 withSchema:(id)arg2 withExistingTable:(_Bool)arg3;
- (void)insertIntoTable:(id)arg1 withTuple:(id)arg2;
- (void)initMaxSizeStatistics:(unsigned long long)arg1;
- (_Bool)loadStatisticTable;
- (void)initStatisticsTable;
- (void)indexTable:(id)arg1 withColumn:(id)arg2;
- (void)loadTables;
- (void)doInitCommon:(id)arg1 withDict:(id)arg2 withFileExists:(_Bool *)arg3 withWriteOptions:(int)arg4;
- (void)doInitializeWithDataFile:(id)arg1 dataFromFile:(id)arg2 withConfiguration:(id)arg3 withWriteOptions:(int)arg4;
- (id)prepInsertStatementForMainTable;
- (double)updateStatisticsString:(id)arg1 colPosition:(unsigned long long)arg2;
- (_Bool)logNSArray:(id)arg1;
- (void)updateStatisticsReal:(double)arg1 colPosition:(unsigned long long)arg2;
- (void)execSQLCommand:(id)arg1;
- (double)columnQueryFor:(unsigned int)arg1 withQuery:(id)arg2;
- (void)dropCommands:(id)arg1;
- (void)removeTrainingRow:(id)arg1;
- (id)initWithDBName:(id)arg1 dataFromFile:(id)arg2 withConfiguration:(id)arg3 withWriteOptions:(int)arg4;
- (_Bool)logCTypesV:(void *)arg1;
- (_Bool)logNSObjectV:(id)arg1;
- (_Bool)logBatchNSArray:(id)arg1;
- (_Bool)logBatchNSDictionary:(id)arg1;
- (_Bool)logNSDataFloat:(id)arg1;
- (_Bool)logNSDataDouble:(id)arg1;
- (void)addColumnToTable:(id)arg1 withNewColumn:(id)arg2;
- (void)queryDatabase:(id)arg1 whereMatch:(id)arg2;
- (void)updateTable:(id)arg1 withAttribute:(id)arg2 whereMatch:(id)arg3;
- (void)deleteRow:(id)arg1 whereMatch:(id)arg2;
- (void)deleteAllRows:(id)arg1;
- (void)printFormat:(id)arg1;
- (id)extractRow:(id)arg1;

@end
