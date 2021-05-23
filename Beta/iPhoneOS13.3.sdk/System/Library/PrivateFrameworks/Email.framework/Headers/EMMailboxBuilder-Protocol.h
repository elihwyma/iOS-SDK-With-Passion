/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class EMMailbox, NSString;

@protocol EMMailboxBuilder <Swift>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) _Bool canContainMessages;
@property (nonatomic) _Bool canArchive;
@property (weak, nonatomic) EMMailbox *parent;
@property (nonatomic) _Bool descriptionUsesRealName;

@end
