/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMMeCardSharingStateController : NSObject

@property (nonatomic) _Bool sharingEnabled;
@property (nonatomic) unsigned long long sharingAudience;
@property (nonatomic) unsigned long long nameFormat;
@property (nonatomic) _Bool nameForkedFromMeCard;
@property (nonatomic) _Bool imageForkedFromMeCard;

+ (id)sharedInstance;

- (id)init;
- (void)_migrateMeCardDomains;
- (void)_syncPreferenceDidChange;
- (void)_incrementSharingVersion;
- (void)postNameFormatChangedNotification;
- (_Bool)wasSharingEverEnabled;

@end
