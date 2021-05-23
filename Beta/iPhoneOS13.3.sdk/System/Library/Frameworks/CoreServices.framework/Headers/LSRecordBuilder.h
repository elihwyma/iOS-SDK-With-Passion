/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class _LSDatabase;

__attribute__((visibility("hidden")))
@interface LSRecordBuilder : NSObject

{
    _LSDatabase *_db;
}

+ (id)recordBuilderForType:(unsigned long long)arg1;

- (void)setDatabase:(id)arg1;
- (void)parseiTunesMetadata:(id)arg1;
- (_Bool)parseInfoPlist:(id)arg1;
- (_Bool)parseInstallationInfo:(id)arg1;
- (unsigned int)registerBundleRecord:(id)arg1 error:(id *)arg2;

@end
