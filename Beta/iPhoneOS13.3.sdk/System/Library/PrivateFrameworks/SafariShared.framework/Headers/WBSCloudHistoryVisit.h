/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSDictionary, NSString, WBSHistoryVisitIdentifier;

@interface WBSCloudHistoryVisit : NSObject <Swift>

{
    _Bool _loadSuccessful;
    _Bool _httpNonGet;
    WBSHistoryVisitIdentifier *_visitIdentifier;
    NSString *_title;
    WBSHistoryVisitIdentifier *_redirectSourceVisitIdentifier;
    WBSCloudHistoryVisit *_redirectSourceVisit;
    WBSHistoryVisitIdentifier *_redirectDestinationVisitIdentifier;
    WBSCloudHistoryVisit *_redirectDestinationVisit;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) WBSHistoryVisitIdentifier *visitIdentifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=loadWasSuccessful) _Bool loadSuccessful;
@property (nonatomic, getter=wasHTTPNonGet) _Bool httpNonGet;
@property (copy, nonatomic) WBSHistoryVisitIdentifier *redirectSourceVisitIdentifier;
@property (weak, nonatomic) WBSCloudHistoryVisit *redirectSourceVisit;
@property (copy, nonatomic) WBSHistoryVisitIdentifier *redirectDestinationVisitIdentifier;
@property (weak, nonatomic) WBSCloudHistoryVisit *redirectDestinationVisit;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHistoryVisit:(id)arg1;
- (id)initWithVisitIdentifier:(id)arg1 title:(id)arg2 loadSuccessful:(_Bool)arg3 httpNonGet:(_Bool)arg4 redirectSourceVisitIdentifier:(id)arg5 redirectDestinationVisitIdentifier:(id)arg6;

@end
