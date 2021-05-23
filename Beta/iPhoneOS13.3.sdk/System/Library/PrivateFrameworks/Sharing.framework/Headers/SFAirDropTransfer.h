/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSProgress, NSString, NSURL, SFAirDropAction, SFAirDropTransferMetaData;

@interface SFAirDropTransfer : NSObject

{
    SFAirDropAction *_cancelAction;
    NSString *_identifier;
    SFAirDropTransferMetaData *_metaData;
    NSError *_error;
    NSProgress *_transferProgress;
    NSString *_contentsTitle;
    NSString *_contentsDescription;
    SFAirDropAction *_selectedAction;
    NSArray *_possibleActions;
    NSArray *_completedURLs;
    unsigned long long _userResponse;
    unsigned long long _transferState;
    unsigned long long _failureReason;
    NSURL *_customDestinationURL;
    id _progressToken;
}

@property (copy, nonatomic) NSURL *customDestinationURL;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SFAirDropTransferMetaData *metaData;
@property (nonatomic) unsigned long long userResponse;
@property (nonatomic) unsigned long long transferState;
@property (nonatomic) unsigned long long failureReason;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSProgress *transferProgress;
@property (retain, nonatomic) id progressToken;
@property (copy, nonatomic) NSString *contentsTitle;
@property (copy, nonatomic) NSString *contentsDescription;
@property (retain, nonatomic) SFAirDropAction *selectedAction;
@property (retain, nonatomic) NSArray *possibleActions;
@property (retain, nonatomic) SFAirDropAction *cancelAction;
@property (copy, nonatomic) NSArray *completedURLs;
@property (nonatomic, readonly) _Bool needsAction;

+ (_Bool)supportsSecureCoding;
+ (_Bool)automaticallyNotifiesObserversOfUserResponse;
+ (_Bool)automaticallyNotifiesObserversOfTransferState;
+ (_Bool)automaticallyNotifiesObserversOfFailureReason;
+ (id)keyPathsForValuesAffectingNeedsAction;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUpProgress;
- (_Bool)updateWithTransfer:(id)arg1;
- (void)updateWithInformation:(id)arg1;
- (void)setUpProgressToBroadcast:(_Bool)arg1;
- (_Bool)updateUsingCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 initialInformation:(id)arg2;

@end
