/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString, RKMessageResponseManager;

@protocol TILinguisticDataSourceMessage;

@interface TIRecipientModel : NSObject

{
    NSString *_identifier;
    RKMessageResponseManager *_trainer;
    id <TILinguisticDataSourceMessage> _lastMessage;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) RKMessageResponseManager *trainer;
@property (retain, nonatomic) id <TILinguisticDataSourceMessage> lastMessage;

- (id)initWithCompositeName:(id)arg1 andTrainer:(id)arg2;
- (id)languageGuessForString:(id)arg1;
- (void)handleMessages:(id)arg1;

@end
