/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSError, NSString, NSURL;

@interface RPFileTransferItem : NSObject

{
    _Bool _completed;
    long long _fileSize;
    CDUnknownBlockType _completionHandler;
    NSString *_filename;
    NSURL *_itemURL;
    NSDictionary *_metadata;
    NSData *_sha256HashData;
    NSError *_error;
    unsigned long long _estimatedSize;
    NSData *_fileData;
    unsigned long long _fileID;
    unsigned long long _metadataSize;
}

@property (nonatomic) _Bool completed;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long estimatedSize;
@property (retain, nonatomic) NSData *fileData;
@property (nonatomic) unsigned long long fileID;
@property (nonatomic) long long fileSize;
@property (nonatomic) unsigned long long metadataSize;
@property (copy, nonatomic) NSData *sha256HashData;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSURL *itemURL;
@property (copy, nonatomic) NSDictionary *metadata;

- (id)init;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;

@end
