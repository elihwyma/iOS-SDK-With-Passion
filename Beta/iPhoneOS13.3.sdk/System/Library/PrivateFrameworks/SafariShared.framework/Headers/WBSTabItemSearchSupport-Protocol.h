/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@class NSArray, NSString;

@protocol WBSTabItemSearchSupport <Swift>

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic) NSString *titleForLastSearch;
@property (copy, nonatomic) NSArray *titleWords;
@property (nonatomic, readonly) NSString *URLString;
@property (copy, nonatomic) NSString *URLStringForLastSearch;
@property (copy, nonatomic) NSArray *URLStringComponents;
@property (copy, nonatomic) NSString *lastSearchTerm;
@property (nonatomic) _Bool matchedLastSearch;

@end
