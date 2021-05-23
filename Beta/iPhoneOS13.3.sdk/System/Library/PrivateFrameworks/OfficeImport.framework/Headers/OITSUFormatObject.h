/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OITSUFormatObject : NSObject <Swift>

{
    CDStruct_730f14de mFormatStruct;
    _Bool mUseExpandedContents;
}

@property (nonatomic, readonly) _Bool useExpandedContents;
@property (nonatomic, readonly) CDStruct_730f14de formatStruct;

+ (id)defaultDateFormat:(id)arg1;
+ (id)defaultDurationFormat;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithTSUFormatFormatStruct:(CDStruct_730f14de)arg1;
- (id)initWithTSUFormatFormatStruct:(CDStruct_730f14de)arg1 useExpandedContents:(_Bool)arg2;
- (void)p_setFormatStruct:(CDStruct_730f14de)arg1;

@end
