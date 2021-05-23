/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class NSNumber;

@protocol NSObject;

@interface ADUserDeviceUtilities : NSObject

{
    NSNumber *_lastiTunesAccountID;
    id <NSObject> _notifyToken;
}

@property (retain) NSNumber *lastiTunesAccountID;
@property (retain, nonatomic) id <NSObject> notifyToken;
@property (nonatomic, readonly) _Bool deviceHasHomeButton;

+ (id)sharedInstance;
+ (id)iCloudAccount;
+ (id)iTunesStoreAccount;
+ (_Bool)isiCloudManagedAppleId;
+ (_Bool)isiTunesManagedAppleId;
+ (id)iTunesAccountIdentifier;
+ (_Bool)isiCloudAccountAvailable;
+ (_Bool)isiTunesAccountAvailable;
+ (_Bool)isManagedAppleId;
+ (_Bool)educationModeEnabled;

- (void)unregisterForiTunesAccountChanges;

@end
