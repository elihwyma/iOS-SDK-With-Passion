//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCDatabaseBackupRecord : NSObject
{
    BOOL _isDirectory;
    unsigned int _genCount;
    NSString *_relativePath;
    NSNumber *_fileID;
    NSNumber *_docID;
}

@property(nonatomic) BOOL isDirectory; // @synthesize isDirectory=_isDirectory;
@property(nonatomic) unsigned int genCount; // @synthesize genCount=_genCount;
@property(retain, nonatomic) NSNumber *docID; // @synthesize docID=_docID;
@property(retain, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithPQLResultSet:(id)arg1;
- (id)initWithRelativePath:(id)arg1 fileID:(id)arg2 docID:(id)arg3 genCount:(unsigned int)arg4 isDirectory:(BOOL)arg5;

@end

