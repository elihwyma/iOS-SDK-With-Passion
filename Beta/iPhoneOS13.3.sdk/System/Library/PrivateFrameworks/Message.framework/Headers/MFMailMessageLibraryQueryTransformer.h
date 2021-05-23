/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EDMessagePersistence, MFMessageCriterionConverter, NSString;

@interface MFMailMessageLibraryQueryTransformer : NSObject

{
    MFMessageCriterionConverter *_criterionConverter;
    EDMessagePersistence *_messagePersistence;
}

@property (retain, nonatomic) MFMessageCriterionConverter *criterionConverter;
@property (weak, nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (long long)messageCriterionConverter:(id)arg1 criterionTypeForKey:(id)arg2;
- (id)messageCriterionConverter:(id)arg1 expressionForConstantValue:(id)arg2 withCriterionType:(long long)arg3;
- (id)mailAccountForIdentifier:(id)arg1;
- (id)initWithMessagePersistence:(id)arg1;
- (id)criterionForQuery:(id)arg1;
- (unsigned int)optionsForQuery:(id)arg1;

@end
