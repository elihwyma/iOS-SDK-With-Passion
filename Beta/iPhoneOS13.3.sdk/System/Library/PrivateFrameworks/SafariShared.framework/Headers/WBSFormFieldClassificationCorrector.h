/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString, WBSFormAutoFillClassificationToCorrectionsTransformer, WBSFormMetadata;

@protocol WBSFormFieldClassificationCorrectorDelegate;

@interface WBSFormFieldClassificationCorrector : NSObject

{
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    NSSet *_uniqueIDsOfControlsThatWereAutoFilled;
    id <WBSFormFieldClassificationCorrectorDelegate> _delegate;
    NSString *_domain;
    WBSFormMetadata *_formMetadata;
    NSDictionary *_formValues;
}

@property (weak, nonatomic) id <WBSFormFieldClassificationCorrectorDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *domain;
@property (copy, nonatomic, readonly) WBSFormMetadata *formMetadata;
@property (copy, nonatomic, readonly) NSDictionary *formValues;

- (id)init;
- (id)initWithDomain:(id)arg1 formMetadata:(id)arg2 formValues:(id)arg3 uniqueIDsOfControlsThatWereAutoFilled:(id)arg4;
- (id)_classificationCorrectionsForControlWithMetadata:(id)arg1 wasIdentifiedAsAddressBookField:(_Bool *)arg2;
- (void)processCorrections;

@end
