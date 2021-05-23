/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface DDScannerObject : NSObject

{
    struct __DDScanner *_scanner;
    int _type;
    _Bool _hasBasicType;
    long long _jobIdentifier;
}

@property (nonatomic) long long jobIdentifier;

- (void)dealloc;
- (int)type;
- (void)cancel;
- (id)initWithType:(int)arg1 enableParsec:(_Bool)arg2;
- (_Bool)hasBasicType;
- (id)scanString:(id)arg1 range:(CDStruct_912cb5d2)arg2 query:(struct __DDScanQuery *)arg3 configuration:(id)arg4;

@end
