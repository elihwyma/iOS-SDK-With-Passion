/*
 Image: /System/Library/PrivateFrameworks/ParsecModel.framework/ParsecModel
 */

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface PARSafariSession : NSManagedObject

@property (nonatomic) short thirdPartyCompletionOrRecentSearch;
@property (nonatomic) short thirdPartyGoto;
@property (nonatomic) short thirdPartyTap;
@property (nonatomic) short goToSite;
@property (nonatomic) short localGoto;
@property (nonatomic) short localTap;
@property (nonatomic) short other;
@property (nonatomic) short parsecGoto;
@property (nonatomic) short parsecTap;
@property (copy, nonatomic) NSDate *timestamp;

+ (id)fetchRequest;

@end
