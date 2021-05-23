/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@class MKMapItem, NSString, NSURL, WBSParsecActionButton, WBSParsecImageRepresentation;

@protocol WBSParsecSearchResult

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *feedbackIdentifier;
@property (nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) NSString *sectionHeader;
@property (nonatomic, readonly) NSString *completion;
@property (copy, nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (nonatomic, readonly) NSURL *appPunchoutURL;
@property (copy, nonatomic, readonly) NSString *mediaKind;
@property (copy, nonatomic, readonly) NSString *referrerForLoadingResult;
@property (nonatomic, readonly) WBSParsecActionButton *actionButton;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (copy, nonatomic, readonly) NSString *sectionBundleIdentifier;
@property (nonatomic, readonly) WBSParsecImageRepresentation *icon;
@property (nonatomic, readonly) WBSParsecImageRepresentation *completionIcon;

- (unsigned short)canBecomeTopHitForQuery: /* Error: Ran out of types for this method. */;
- (unsigned short)iconWithSession: /* Error: Ran out of types for this method. */;
- (unsigned short)completionIconWithSession: /* Error: Ran out of types for this method. */;

@end
