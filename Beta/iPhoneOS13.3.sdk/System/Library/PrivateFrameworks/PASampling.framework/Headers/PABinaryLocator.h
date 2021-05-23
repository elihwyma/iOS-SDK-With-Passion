/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PABinaryLocator : NSObject

{
    NSMutableDictionary *_mappings;
    NSString *_buildNumber;
    _Bool _dirty;
    _Bool _enabled;
}

@property _Bool enabled;

+ (id)sharedBinaryLocator;

- (id)init;
- (oneway void)done;
- (id)mappings;
- (id)urlForUUID:(id)arg1;
- (_Bool)removeURLForUUID:(id)arg1;
- (_Bool)addURLForCSSymbolOwner:(struct _CSTypeRef)arg1;
- (void)saveMappings;
- (_Bool)addURL:(id)arg1 ForUUID:(id)arg2;
- (id)initSharedBinaryLocator;
- (void)_saveMappings;

@end
