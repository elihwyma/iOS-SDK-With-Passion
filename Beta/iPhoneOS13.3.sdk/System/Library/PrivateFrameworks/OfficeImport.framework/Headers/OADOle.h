/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OADOle : NSObject

{
    _Bool mIconic;
    NSString *mCLSID;
    NSString *mAnsiUserType;
    NSString *mAnsiClipboardFormatName;
    unsigned int mWinClipboardFormat;
    NSString *mMacClipboardFormat;
    NSString *mAnsiProgID;
    NSString *mUnicodeUserType;
    NSString *mUnicodeClipboardFormatName;
    NSString *mUnicodeProgID;
    id mObject;
}

+ (_Bool)isProgIDChart:(id)arg1;
+ (_Bool)isProgIDMathType:(id)arg1;
+ (_Bool)isCLSIDSupported:(id)arg1;

- (id)init;
- (id)description;
- (id)object;
- (void)setObject:(id)arg1;
- (_Bool)iconic;
- (void)setIconic:(_Bool)arg1;
- (id)CLSID;
- (void)setCLSID:(id)arg1;
- (id)ansiUserType;
- (void)setAnsiUserType:(id)arg1;
- (id)ansiClipboardFormatName;
- (void)setAnsiClipboardFormatName:(id)arg1;
- (unsigned int)winClipboardFormat;
- (void)setWinClipboardFormat:(unsigned int)arg1;
- (id)macClipboardFormat;
- (void)setMacClipboardFormat:(id)arg1;
- (id)ansiProgID;
- (void)setAnsiProgID:(id)arg1;
- (id)unicodeUserType;
- (void)setUnicodeUserType:(id)arg1;
- (id)unicodeClipboardFormatName;
- (void)setUnicodeClipboardFormatName:(id)arg1;
- (id)unicodeProgID;
- (void)setUnicodeProgID:(id)arg1;

@end
