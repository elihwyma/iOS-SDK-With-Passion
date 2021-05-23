/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADTextField.h>

__attribute__((visibility("hidden")))
@interface OADDateTimeField : OADTextField

{
    int _format;
}

@property (nonatomic) int format;

- (id)init;
- (_Bool)isEmpty;
- (_Bool)isSimilarToTextRun:(id)arg1;

@end
