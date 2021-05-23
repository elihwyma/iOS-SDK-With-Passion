/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSString, pidMapper;

@interface wspContext : NSObject

{
    _Bool _supports64BitOffsets;
    int _queryType;
    unsigned int _serverVersion;
    unsigned int _trueSequential;
    unsigned int _workID;
    unsigned int _cursor;
    unsigned int _whereID;
    unsigned int _seekBookmarkOffset;
    unsigned int _seekSkip;
    unsigned int _rowsSoFar;
    NSString *_serverName;
    NSString *_serverAddress;
    NSString *_userName;
    NSString *_clientMachineName;
    NSString *_searchPath;
    NSString *_contentPattern;
    NSMutableArray *_fnamePatterns;
    NSMutableArray *_fextPatterns;
    NSDate *_modDate;
    pidMapper *_pidMap;
    struct timespec _modDateSpec;
}

@property (retain) NSString *serverName;
@property (retain) NSString *serverAddress;
@property (retain) NSString *userName;
@property (retain) NSString *clientMachineName;
@property (retain) NSString *searchPath;
@property int queryType;
@property struct timespec modDateSpec;
@property (retain) NSString *contentPattern;
@property (retain) NSMutableArray *fnamePatterns;
@property (retain) NSMutableArray *fextPatterns;
@property (retain) NSDate *modDate;
@property (retain) pidMapper *pidMap;
@property (readonly) unsigned int serverVersion;
@property (readonly) _Bool supports64BitOffsets;
@property unsigned int trueSequential;
@property unsigned int workID;
@property unsigned int cursor;
@property unsigned int whereID;
@property unsigned int seekBookmarkOffset;
@property unsigned int seekSkip;
@property unsigned int rowsSoFar;

- (id)init;
- (void)setServerVersion:(unsigned int)arg1;
- (void)setContentSearch:(id)arg1;
- (void)setFilenameSearch:(id)arg1;
- (void)setFileExtSearch:(id)arg1;
- (void)setModDateSearch:(id)arg1;
- (_Bool)serverSupports64BitOffsets;
- (void)logContents;

@end
