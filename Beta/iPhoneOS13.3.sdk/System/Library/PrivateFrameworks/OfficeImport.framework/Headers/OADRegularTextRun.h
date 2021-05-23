/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADTextRun.h>

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface OADRegularTextRun : OADTextRun

{
    NSMutableString *mText;
}

- (id)init;
- (_Bool)isEmpty;
- (id)text;
- (unsigned long long)characterCount;
- (_Bool)isSimilarToTextRun:(id)arg1;

@end
