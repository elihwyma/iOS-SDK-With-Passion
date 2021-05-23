/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface C3DIONSZipFileArchive : NSObject

{
    NSDictionary *_contents;
    NSData *_data;
    id _provider;
    long long _desc;
    NSString *_path;
    NSArray *_names;
    NSDictionary *_properties;
    NSMutableDictionary *_cachedContents;
    void *_reserved;
    struct __zFlags {
        unsigned int providerSuppliesContents:1;
        unsigned int providerSuppliesStreams:1;
        unsigned int providerSuppliesProperties:1;
        unsigned int noContentsCaching:1;
        unsigned int fileOpen:1;
        unsigned int reserved:27;
    } _zFlags;
    void *_reserved2[5];
}

- (void)dealloc;
- (void)invalidate;
- (_Bool)isValid;
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)archiveData;
- (id)initWithPath:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)contentsForEntryName:(id)arg1;
- (id)initWithEntryNames:(id)arg1 contents:(id)arg2 properties:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithEntryNames:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3;
- (id)entryNames;
- (id)streamForEntryName:(id)arg1;
- (_Bool)writeContentsForEntryName:(id)arg1 toFile:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)propertiesForEntryName:(id)arg1;
- (id)archiveStream;

@end
