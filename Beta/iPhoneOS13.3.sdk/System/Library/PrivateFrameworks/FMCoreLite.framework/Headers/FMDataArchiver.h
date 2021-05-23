/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSData, NSURL;

@interface FMDataArchiver : NSObject

{
    _Bool _backedUp;
    _Bool _createDirectories;
    long long _dataProtectionClass;
    NSURL *_fileURL;
    NSData *_unitTestData;
}

@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSData *unitTestData;
@property (nonatomic) long long dataProtectionClass;
@property (nonatomic) _Bool backedUp;
@property (nonatomic) _Bool createDirectories;

+ (id)defaultClasses;

- (id)initWithFileURL:(id)arg1;
- (id)readDataOfClasses:(id)arg1 error:(id *)arg2;
- (id)underlyingDataWithError:(id *)arg1;
- (id)saveObject:(id)arg1;
- (unsigned long long)dataWritingOptionForDataProtectionClass:(long long)arg1;
- (void)injectUnitTestData:(id)arg1;
- (id)readDictionaryAndClasses:(id)arg1 error:(id *)arg2;
- (id)readArrayAndClasses:(id)arg1 error:(id *)arg2;
- (id)saveArray:(id)arg1;
- (id)saveDictionary:(id)arg1;
- (_Bool)saveArray:(id)arg1 error:(id *)arg2;
- (_Bool)saveDictionary:(id)arg1 error:(id *)arg2;

@end
