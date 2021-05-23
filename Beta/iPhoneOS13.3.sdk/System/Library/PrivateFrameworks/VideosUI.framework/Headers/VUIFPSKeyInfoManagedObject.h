/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString, NSURL, VUIVideoManagedObject;

__attribute__((visibility("hidden")))
@interface VUIFPSKeyInfoManagedObject : NSManagedObject

@property (nonatomic) _Bool allowsManualRenewal;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) _Bool isLowValue;
@property (retain, nonatomic) NSData *keyData;
@property (copy, nonatomic) NSURL *keyURI;
@property (copy, nonatomic) NSNumber *playbackDuration;
@property (copy, nonatomic) NSDate *playbackExpirationStartDate;
@property (copy, nonatomic) NSDate *renewalDate;
@property (copy, nonatomic) NSNumber *renewalInterval;
@property (copy, nonatomic) NSDate *retrievalDate;
@property (retain, nonatomic) VUIVideoManagedObject *video;

+ (id)fetchRequest;

- (void)populateFromKeyRequest:(id)arg1 video:(id)arg2;

@end
