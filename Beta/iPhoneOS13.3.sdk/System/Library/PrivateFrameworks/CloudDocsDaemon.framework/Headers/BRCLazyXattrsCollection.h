/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCLazyXattrsCollection : NSObject

{
    NSMutableData *_xattrNamesList;
    NSMutableData *_xattrNamesData;
    unsigned int _xattrCount;
    unsigned int _contentXattrCount;
    int _fd;
    long long _sizeLimit;
    long long _cacheSize;
    NSMutableDictionary *_cachedXattrs;
}

- (void)clearCache;
- (id)initWithFD:(int)arg1 sizeLimit:(long long)arg2 syncable:(_Bool)arg3 error:(id *)arg4;
- (unsigned int)xattrNamesCount;
- (const char **)xattrNamesBegin;
- (unsigned int)structuralXattrNamesCount;
- (const char **)structuralXattrNamesBegin;
- (unsigned int)contentXattrNamesCount;
- (const char **)contentXattrNamesBegin;
- (const char *)xattrNamesListBegin;
- (const char *)xattrNamesListEnd;
- (const char **)xattrNamesEnd;
- (const char **)structuralXattrNamesEnd;
- (const char **)contentXattrNamesEnd;
- (id)getXattrValue:(id)arg1 error:(id *)arg2;

@end
