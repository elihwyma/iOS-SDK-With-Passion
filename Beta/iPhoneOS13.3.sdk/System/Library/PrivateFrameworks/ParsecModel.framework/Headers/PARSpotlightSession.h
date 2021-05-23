/*
 Image: /System/Library/PrivateFrameworks/ParsecModel.framework/ParsecModel
 */

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface PARSpotlightSession : NSManagedObject

@property (nonatomic) short appLaunch;
@property (nonatomic) short onDeviceAddressBookData;
@property (nonatomic) short onDeviceOtherPersonalData;
@property (nonatomic) short other;
@property (nonatomic) short parsec;
@property (nonatomic) short punchout;
@property (nonatomic) short querySuggestion;
@property (nonatomic) short thirdPartyInAppContent;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) short siriSuggestions;

+ (id)fetchRequest;

@end
