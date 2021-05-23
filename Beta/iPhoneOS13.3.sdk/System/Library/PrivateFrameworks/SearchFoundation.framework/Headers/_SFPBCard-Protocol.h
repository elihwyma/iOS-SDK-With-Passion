/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBURL;

@protocol _SFPBCard <Swift>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (copy) NSArray *cardSections;
@property (copy, nonatomic) NSData *intentMessageData;
@property (copy, nonatomic) NSString *intentMessageName;
@property (copy, nonatomic) NSData *intentResponseMessageData;
@property (copy, nonatomic) NSString *intentResponseMessageName;
@property (copy, nonatomic) NSArray *dismissalCommands;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *contextReferenceIdentifier;
@property (retain, nonatomic) _SFPBURL *urlValue;
@property (nonatomic) int source;
@property (copy, nonatomic) NSData *entityIdentifier;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic) _Bool flexibleSectionOrder;
@property (copy, nonatomic) NSArray *entityProtobufMessages;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addCardSections: /* Error: Ran out of types for this method. */;
- (unsigned short)addDismissalCommands: /* Error: Ran out of types for this method. */;
- (unsigned short)addEntityProtobufMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCardSections;
- (unsigned short)cardSectionsCount;
- (unsigned short)cardSectionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearDismissalCommands;
- (unsigned short)dismissalCommandsCount;
- (unsigned short)dismissalCommandsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearEntityProtobufMessages;
- (unsigned short)entityProtobufMessagesCount;
- (unsigned short)entityProtobufMessagesAtIndex: /* Error: Ran out of types for this method. */;

@end
