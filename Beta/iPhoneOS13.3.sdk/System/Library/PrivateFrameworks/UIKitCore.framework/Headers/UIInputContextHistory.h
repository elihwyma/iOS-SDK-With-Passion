/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, TIInputContextHistory;

@interface UIInputContextHistory : NSObject

{
    TIInputContextHistory *_tiInputContextHistory;
}

@property (nonatomic, readonly) NSSet *senderIdentifiers;
@property (nonatomic, readonly) NSSet *recipientIdentifiers;
@property (nonatomic, readonly) TIInputContextHistory *tiInputContextHistory;
@property (nonatomic, readonly) NSString *senderIdentifier;

- (_Bool)isEqual:(id)arg1;
- (id)mostRecentTextEntries:(unsigned long long)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3;
- (id)initWithRecipientIdentifiers:(id)arg1;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;

@end
