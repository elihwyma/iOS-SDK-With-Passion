/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatter_FormatterCache : NSObject

{
    NSLock *_dateFormatterCacheLock;
    NSMutableDictionary *_dateFormatterCache;
}

+ (id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3;

- (id)init;
- (id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3;

@end
