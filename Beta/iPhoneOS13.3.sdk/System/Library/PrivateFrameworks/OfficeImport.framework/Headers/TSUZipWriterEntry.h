/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TSUZipWriterEntry : NSObject

{
    unsigned int _CRC;
    NSString *_name;
    NSDate *_lastModificationDate;
    unsigned long long _size;
    unsigned long long _offset;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *lastModificationDate;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned int CRC;

@end
