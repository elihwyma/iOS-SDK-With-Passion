/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDString, NSString;

__attribute__((visibility("hidden")))
@interface EDContentFormat : NSObject <Swift>

{
    EDString *mFormatString;
    unsigned long long mFormatId;
    _Bool mBuiltIn;
    _Bool mReferenced;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contentFormatWithFormatString:(id)arg1;
+ (id)contentFormatWithFormatString:(id)arg1 formatId:(unsigned long long)arg2;
+ (id)contentFormatWithNSString:(id)arg1 formatId:(unsigned long long)arg2 builtIn:(_Bool)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)key;
- (id)formatString;
- (_Bool)builtIn;
- (unsigned long long)formatId;
- (_Bool)isEqualToContentFormat:(id)arg1;
- (_Bool)referenced;
- (void)setFormatId:(unsigned long long)arg1;
- (void)setReferenced:(_Bool)arg1;

@end
