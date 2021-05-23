/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSString;

@protocol FCChannelProviding <Swift>

@property (copy, nonatomic, readonly) NSArray *sectionIDs;
@property (copy, nonatomic, readonly) NSString *defaultSectionID;
@property (nonatomic, readonly) _Bool supportsNotifications;
@property (nonatomic, readonly) _Bool isWhitelisted;
@property (copy, nonatomic, readonly) NSArray *currentIssueIDs;
@property (copy, nonatomic, readonly) NSString *backIssuesListID;
@property (nonatomic, readonly) NSString *supergroupKnobsJson;
@property (nonatomic, readonly) NSString *supergroupConfigJson;

- (unsigned short)freeFeedIDForSection:bin: /* Error: Ran out of types for this method. */;
- (unsigned short)paidFeedIDForSection:bin: /* Error: Ran out of types for this method. */;

@end
