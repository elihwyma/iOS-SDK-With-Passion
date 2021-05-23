/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADTextRun.h>

@class NSString, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADTextField : OADTextRun

{
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}

- (id)init;
- (_Bool)isEmpty;
- (id)text;
- (void)setText:(id)arg1;
- (unsigned long long)characterCount;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;

@end
