/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface VMUProcessDescription : NSObject

{
    unsigned int _task;
    int _pid;
    _Bool _taskIsCorpse;
    NSString *_hardwareModel;
    NSString *_processName;
    _Bool _processNameNeedsCorrection;
    NSString *_executablePath;
    struct _CSTypeRef _symbolicator;
    _Bool _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    _Bool _is64Bit;
    struct timeval _proc_starttime;
    unsigned long long _physicalFootprint;
    unsigned long long _physicalFootprintPeak;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    _Bool _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    struct mapped_memory_t *_mappedMemory;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSDate *_date;
    NSMutableDictionary *_environment;
}

@property (nonatomic, readonly) unsigned long long physicalFootprint;
@property (nonatomic, readonly) unsigned long long physicalFootprintPeak;

+ (id)parseBinaryImagesDescription:(id)arg1;
+ (struct _CSTypeRef)symbolicatorFromBinaryImagesDescription:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)date;
- (id)processIdentifier;
- (id)bundleIdentifier;
- (id)executablePath;
- (id)processName;
- (id)displayName;
- (int)pid;
- (unsigned int)task;
- (_Bool)is64Bit;
- (id)processVersion;
- (int)cpuType;
- (id)initWithTask:(unsigned int)arg1 getBinariesList:(_Bool)arg2;
- (id)binaryImagesDescription;
- (_Bool)initFromCorpse;
- (void)initFromLiveProcess;
- (void)_libraryLoaded:(struct _CSTypeRef)arg1;
- (void)cleansePathsIncludingBinaryImageList:(_Bool)arg1;
- (id)binaryImages;
- (id)processVersionDictionary;
- (id)_sanitizeVersion:(id)arg1;
- (void)setCrashReporterInfo;
- (id)_bundleLock;
- (void)clearCrashReporterInfo;
- (id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2;
- (id)_binaryImagesDescriptionForRanges:(id)arg1;
- (id)_buildVersionDictionary;
- (id)_osVersionDictionary;
- (id)_buildInfoDescription;
- (id)_cpuTypeDescription;
- (id)parentProcessName;
- (id)_systemVersionDescription;
- (id)processDescriptionHeader;
- (id)dateAndVersionDescription;
- (id)processStatisticsDescription;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2;
- (int)parentPid;
- (id)parentProcessPath;
- (_Bool)isAppleApplication;
- (id)binaryImageDictionaryForAddress:(unsigned long long)arg1;
- (id)valueForEnvVar:(id)arg1;
- (id)binaryImagesDescriptionForBacktraces:(id)arg1;

@end
