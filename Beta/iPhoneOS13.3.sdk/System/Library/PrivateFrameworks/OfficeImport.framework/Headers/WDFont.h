/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface WDFont : NSObject <Swift>

{
    NSString *mName;
    NSMutableArray *mAlternateNames;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}

+ (int)cpFontClassFromWdFontFamily:(int)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setName:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)alternateNames;
- (int)pitch;
- (void)setPitch:(int)arg1;
- (int)fontFamily;
- (void)setFontFamily:(int)arg1;
- (int)characterSet;
- (void)setCharacterSet:(int)arg1;
- (void)addAlternateName:(id)arg1;
- (id)secondName;

@end
