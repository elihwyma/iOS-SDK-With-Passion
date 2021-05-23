/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDPhoneticInfo, EDRunsCollection, NSString;

__attribute__((visibility("hidden")))
@interface EDString : NSObject <Swift>

{
    NSString *mString;
    EDRunsCollection *mRuns;
    EDPhoneticInfo *mPhoneticInfo;
    _Bool mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)string;
+ (id)edStringWithString:(id)arg1;
+ (id)edStringWithString:(id)arg1 runs:(id)arg2;

- (id)init;
- (id)string;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (_Bool)isEqualToString:(id)arg1;
- (void)appendString:(id)arg1;
- (void)setString:(id)arg1;
- (id)initWithString:(id)arg1;
- (void)prependString:(id)arg1;
- (id)runs;
- (void)setRuns:(id)arg1;
- (_Bool)areThereRuns;
- (id)firstRunFont;
- (id)firstRunEffects;
- (void)setDoNotModify:(_Bool)arg1;
- (id)initWithString:(id)arg1 runs:(id)arg2;
- (_Bool)isEqualToEDString:(id)arg1;
- (void)removeCharacterAtIndex:(unsigned long long)arg1;
- (void)removeCharactersInSet:(id)arg1;
- (id)phoneticInfo;
- (void)setPhoneticInfo:(id)arg1;
- (id)firstFont;

@end
