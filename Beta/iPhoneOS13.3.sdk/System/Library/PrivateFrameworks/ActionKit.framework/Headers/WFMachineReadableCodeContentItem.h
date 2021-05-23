/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFContentItem.h>

@class NSString, WFMachineReadableCode;

@interface WFMachineReadableCodeContentItem : WFContentItem

{
    _Bool _prefersImage;
    NSString *_errorCorrectionLevel;
}

@property (nonatomic) _Bool prefersImage;
@property (retain, nonatomic) NSString *errorCorrectionLevel;
@property (nonatomic, readonly) WFMachineReadableCode *codeObject;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)qrCodeItemWithString:(id)arg1 errorCorrectionLevel:(id)arg2;

- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)preferredFileType;
- (id)preferredObjectType;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateImageOfSize:(struct CGSize)arg1 withErrorCorrectionLevel:(id)arg2 error:(id *)arg3;

@end
