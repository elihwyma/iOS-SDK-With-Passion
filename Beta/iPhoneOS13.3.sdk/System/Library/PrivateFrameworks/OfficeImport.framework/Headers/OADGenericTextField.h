/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADTextField.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OADGenericTextField : OADTextField

{
    NSString *_guid;
    NSString *_type;
}

@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *type;

- (id)initWithGuid:(id)arg1 type:(id)arg2;
- (_Bool)isSimilarToTextRun:(id)arg1;

@end
