/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDCollection, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDPhoneticInfo : NSObject <Swift>

{
    EDResources *mResources;
    unsigned long long mFontIndex;
    NSString *mString;
    int mType;
    int mAlign;
    EDCollection *mRuns;
    _Bool mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)phoneticInfoWithResources:(id)arg1;

- (id)string;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (void)appendString:(id)arg1;
- (void)setString:(id)arg1;
- (void)setFont:(id)arg1;
- (id)font;
- (int)align;
- (void)setAlign:(int)arg1;
- (void)prependString:(id)arg1;
- (unsigned long long)fontIndex;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (id)runs;
- (void)setDoNotModify:(_Bool)arg1;
- (_Bool)isEqualToEDPhoneticInfo:(id)arg1;

@end
