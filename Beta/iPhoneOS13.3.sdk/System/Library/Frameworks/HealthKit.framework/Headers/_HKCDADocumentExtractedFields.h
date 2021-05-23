/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _HKCDADocumentExtractedFields : NSObject

{
    NSDate *_extractedDate;
    NSString *_extractedTitle;
    NSString *_extractedPatient;
    NSString *_extractedAuthorName;
    NSString *_extractedCustodianName;
}

@property (nonatomic, readonly) NSDate *extractedDate;
@property (nonatomic, readonly) NSString *extractedTitle;
@property (nonatomic, readonly) NSString *extractedPatient;
@property (nonatomic, readonly) NSString *extractedAuthorName;
@property (nonatomic, readonly) NSString *extractedCustodianName;

- (id)initWithDocumentData:(id)arg1;
- (void)extractHeaderFieldsFromDocumentData:(id)arg1;
- (id)_firstFrom:(id)arg1 tagRule:(id)arg2 nilOnFail:(_Bool)arg3;
- (id)_parseCDADate:(id)arg1;
- (id)_personNameFrom:(id)arg1 familyTagRule:(id)arg2 givenTagRule:(id)arg3 nilOnFail:(_Bool)arg4;

@end
