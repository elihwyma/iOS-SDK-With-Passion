/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@interface _WKWebsiteDataStore : NSObject

{
    struct RetainPtr<WKWebsiteDataStore> _dataStore;
}

@property (readonly, getter=isNonPersistent) _Bool nonPersistent;

+ (id)nonPersistentDataStore;
+ (id)defaultDataStore;

- (id).cxx_construct;
- (id)initWithDataStore:(id)arg1;
- (void)fetchDataRecordsOfTypes:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDataOfTypes:(unsigned long long)arg1 modifiedSince:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDataOfTypes:(unsigned long long)arg1 forDataRecords:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
