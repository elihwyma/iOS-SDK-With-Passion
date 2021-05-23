/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface _MultiplatformDonationRecencyInfo : NSObject

{
    NSString *_remoteBundleIdentifier;
    NSString *_localBundleIdentifier;
    NSDate *_remoteDonationCreationDate;
    NSDate *_localDonationCreationDate;
}

@property (copy, nonatomic) NSString *remoteBundleIdentifier;
@property (copy, nonatomic) NSString *localBundleIdentifier;
@property (retain, nonatomic) NSDate *remoteDonationCreationDate;
@property (retain, nonatomic) NSDate *localDonationCreationDate;

- (id)identifierForMostRecentData;

@end
