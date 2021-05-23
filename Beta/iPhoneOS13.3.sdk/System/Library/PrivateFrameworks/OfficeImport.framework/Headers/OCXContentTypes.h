/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface OCXContentTypes : NSObject

{
    NSMutableArray *mContentTypes;
    NSMutableSet *mDefaultTypes;
    NSMutableDictionary *mContentTypeObjectMap;
    NSMutableDictionary *mContentTypeCountMap;
}

+ (id)relativePathForPath:(id)arg1 currentPath:(id)arg2;

- (id)init;
- (id)pathForKey:(id)arg1;
- (void)populateCommonExtensions;
- (id)uniquePathForPath:(id)arg1;
- (id)addContentTypeForKey:(id)arg1 contentType:(id)arg2 path:(id)arg3;
- (id)pathForContentType:(id)arg1;
- (id)pathForMainDocument;
- (_Bool)containsContentType:(id)arg1;
- (_Bool)containsContentType:(id)arg1 withKey:(id)arg2;
- (_Bool)isLastEntryContentType:(id)arg1;
- (void)writeContentTypesToStream:(id)arg1;
- (void)addContentTypeForContentType:(id)arg1 extension:(id)arg2;

@end
