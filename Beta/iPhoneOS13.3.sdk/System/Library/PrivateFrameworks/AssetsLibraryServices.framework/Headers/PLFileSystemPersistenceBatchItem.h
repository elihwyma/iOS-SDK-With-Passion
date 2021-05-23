/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface PLFileSystemPersistenceBatchItem : NSObject

{
    NSURL *_fileURL;
    NSMutableDictionary *_attributes;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (retain, nonatomic) NSMutableDictionary *attributes;

- (id)description;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)initWithFileURL:(id)arg1;
- (void)persist;
- (void)setUInt16:(unsigned short)arg1 forKey:(id)arg2;
- (void)setInt32:(int)arg1 forKey:(id)arg2;
- (void)setUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (void)setUUIDString:(id)arg1 forKey:(id)arg2;

@end
