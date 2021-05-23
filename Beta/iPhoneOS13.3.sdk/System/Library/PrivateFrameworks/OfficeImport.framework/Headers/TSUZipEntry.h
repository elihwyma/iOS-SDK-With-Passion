/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TSUZipEntry : NSObject

{
    _Bool _compressed;
    unsigned short _nameLength;
    unsigned short _extraFieldsLength;
    unsigned int _CRC;
    NSString *_name;
    NSDate *_lastModificationDate;
    unsigned long long _size;
    NSString *_collapsedName;
    unsigned long long _compressedSize;
    unsigned long long _offset;
    unsigned long long _fileHeaderLength;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *collapsedName;
@property (nonatomic, getter=isCompressed) _Bool compressed;
@property (copy, nonatomic) NSDate *lastModificationDate;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long compressedSize;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned int CRC;
@property (nonatomic) unsigned short nameLength;
@property (nonatomic) unsigned short extraFieldsLength;
@property (nonatomic) unsigned long long fileHeaderLength;

- (id)description;

@end
