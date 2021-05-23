/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PFZipEndOfCentralDirectoryRecord : NSObject

{
    unsigned short _numberOfDisk;
    unsigned short _diskWhereCentralDirectoryStarts;
    unsigned short _numberOfCentralDirectoryRecordsOnThisDisk;
    unsigned short _totalNumberOfCentralDirectoryRecords;
    unsigned int _byteSizeOfCentralDirectory;
    unsigned int _centralDirectoryOffset;
    unsigned short _commentLength;
    NSString *_comment;
}

@property (nonatomic) unsigned short numberOfDisk;
@property (nonatomic) unsigned short diskWhereCentralDirectoryStarts;
@property (nonatomic) unsigned short numberOfCentralDirectoryRecordsOnThisDisk;
@property (nonatomic) unsigned short totalNumberOfCentralDirectoryRecords;
@property (nonatomic) unsigned int byteSizeOfCentralDirectory;
@property (nonatomic) unsigned int centralDirectoryOffset;
@property (nonatomic, readonly) unsigned short commentLength;
@property (retain, nonatomic) NSString *comment;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)loadFromBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2;
- (void)appendToData:(id)arg1;

@end
