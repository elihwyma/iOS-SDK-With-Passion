/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <MobileMailUI/Swift-Protocol.h>

@class ECSubject, MFAddressAtomStatusManager, MFMailboxUid, NSArray, NSDate;

@protocol MessageHeaderViewModelBuilder <Swift>

@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) ECSubject *subject;
@property (copy, nonatomic) MFMailboxUid *mailbox;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property (copy, nonatomic) NSArray *bccList;
@property (retain, nonatomic) MFAddressAtomStatusManager *atomManager;

@end
