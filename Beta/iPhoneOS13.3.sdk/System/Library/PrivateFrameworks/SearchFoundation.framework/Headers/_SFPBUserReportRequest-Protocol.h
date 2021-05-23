/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _SFPBUserReportRequest <Swift>

@property (copy, nonatomic) NSString *affordanceText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *dismissText;
@property (copy, nonatomic) NSArray *userReportOptions;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addUserReportOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearUserReportOptions;
- (unsigned short)userReportOptionsCount;
- (unsigned short)userReportOptionsAtIndex: /* Error: Ran out of types for this method. */;

@end
