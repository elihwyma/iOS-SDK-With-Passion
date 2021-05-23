/*
 Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface OSALog : NSObject

{
    struct __sFILE *_stream;
    NSDictionary *_metaData;
    NSString *_filepath;
    _Bool _preserveFiles;
    _Bool _deleteOnRetire;
    NSString *_bugType;
}

@property (readonly) struct __sFILE *stream;
@property (readonly) NSDictionary *metaData;
@property (readonly) NSString *filepath;
@property _Bool deleteOnRetire;
@property (readonly) NSString *bugType;

+ (id)createForSubmission:(id)arg1 metadata:(id)arg2 options:(id)arg3 error:(id *)arg4 writing:(CDUnknownBlockType)arg5;
+ (void)iterateLogsWithOptions:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)markDescriptor:(int)arg1 withPairs:(id)arg2 andOptions:(id)arg3;
+ (void)markDescriptor:(int)arg1 forKey:(id)arg2 withObj:(id)arg3;
+ (void)cleanupRetired:(id)arg1;
+ (id)scanProxies:(id)arg1;
+ (unsigned int)scanLogs:(id)arg1 from:(id)arg2;
+ (void)purgeLogs:(id)arg1;
+ (void)setBridgeDelegate:(id)arg1;

- (void)dealloc;
- (id)description;
- (_Bool)isReasonableSize:(long long)arg1 forRouting:(id)arg2;
- (void)retire:(const char *)arg1;
- (id)initWithPath:(id)arg1 forRouting:(id)arg2 usingConfig:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (void)closeFileStream;
- (id)initWithType:(id)arg1 filepath:(id)arg2 metadata:(id)arg3 options:(id)arg4 at:(double)arg5 error:(id *)arg6;
- (void)rename:(id)arg1;
- (void)markWithKey:(const char *)arg1 value:(const char *)arg2;
- (id)initWithPath:(id)arg1 forRouting:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithPath:(id)arg1 forRouting:(id)arg2 options:(id)arg3;

@end
