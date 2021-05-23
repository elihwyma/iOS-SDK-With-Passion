/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFAirDropAction : NSObject

{
    _Bool _requiresUnlockedUI;
    _Bool _shouldUpdateUserResponse;
    NSString *_localizedTitle;
    NSString *_singleItemLocalizedTitle;
    NSString *_actionIdentifier;
    NSString *_transferIdentifier;
    unsigned long long _minRequiredTransferState;
    unsigned long long _maxTransferState;
    CDUnknownBlockType _actionHandler;
}

@property (copy, nonatomic, readonly) NSString *transferIdentifier;
@property (nonatomic) unsigned long long minRequiredTransferState;
@property (nonatomic) unsigned long long maxTransferState;
@property (nonatomic) _Bool requiresUnlockedUI;
@property (nonatomic) _Bool shouldUpdateUserResponse;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *singleItemLocalizedTitle;
@property (copy, nonatomic) CDUnknownBlockType actionHandler;
@property (copy, nonatomic, readonly) NSString *actionIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransferIdentifier:(id)arg1 actionIdentifier:(id)arg2 title:(id)arg3 singleItemTitle:(id)arg4;
- (void)triggerAction;

@end
