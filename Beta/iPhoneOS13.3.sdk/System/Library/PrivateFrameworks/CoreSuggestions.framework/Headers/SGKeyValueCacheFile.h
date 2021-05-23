/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData, NSString;

@interface SGKeyValueCacheFile : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    NSData *_data;
    int _fd;
    NSString *_tmpDir;
    NSString *_tmpPath;
    NSString *_tmpDest;
    NSMutableData *_memStore;
}

+ (_Bool)supportsSecureCoding;
+ (id)encodedStringForFullName:(id)arg1;
+ (id)fullNameForEncodedContact:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1;
- (id)_map;
- (id)initInMemory;
- (id)initBlank;
- (id)initTemporaryForOverwritingPath:(id)arg1;
- (void)commitTemporaryFile;
- (id)valueForKey:(id)arg1 found:(_Bool *)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3;
- (void)setValueIfNotPresent:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3;
- (void)deleteValueByRecordId:(id)arg1;
- (void)deleteValueByRecordIdSet:(id)arg1;

@end
